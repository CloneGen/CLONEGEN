void main () {
    int i, j, m, n, p = 0, a [10000] [16];
    for (j = 0; j < 10000; j++) {
        for (i = 0; i < 16; i++) {
            scanf ("%d", &a[j][i]);
            if ((a[j][i] == 0) || (a[j][i] == -1))
                break;
        }
        if (a[j][0] == -1)
            break;
    }
    for (m = 0; m < j; m++) {
        i = 0;
        while (a[m][i] != 0) {
            n = 0;
            while (a[m][n] != 0) {
                if (a[m][i] == 2 * a[m][n]) {
                    p++;
                }
                n++;
            }
            i++;
        }
        printf ("%d\n", p);
        p = 0;
    }
}

