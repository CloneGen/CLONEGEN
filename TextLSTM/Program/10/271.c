void main () {
    int num, h [27] = {100000000}, lj [27] [27] = {0};
    int i, j, k, max;
    scanf ("%d", &num);
    for (i = 1; i <= num; i++)
        scanf ("%d", &h[i]);
    for (i = num; i >= 0; i--) {
        for (j = num; j > i; j--) {
            if (h[i] >= h[j]) {
                max = 0;
                for (k = j; k <= num; k++)
                    max = (max > lj[i][k]) ? max : lj[i][k];
                for (k = j; k <= num; k++)
                    if (h[j] >= h[k])
                        max = (max > lj[j][k] + 1) ? max : lj[j][k] + 1;
                lj[i][j] = max;
            }
        }
    }
    printf ("%d\n", lj[0][1]);
}

