void main () {
    int a [9] [9], i, j, x, y, t, k = 0;
    scanf ("%d,%d", &x, &y);
    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
            scanf ("%d", &a[i][j]);
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            for (k = 0; k < y; k++)
                if (a[i][k] > a[i][j])
                    break;
            if (k == y) {
                for (k = 0; k < x; k++)
                    if (a[k][j] < a[i][j])
                        break;
                if (k == x) {
                    printf ("%d+%d", i, j);
                    t++;
                }
            }
        }
    }
    if (t == 0)
        printf ("No");
}

