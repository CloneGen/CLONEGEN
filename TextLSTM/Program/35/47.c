void main () {
    int a [8] [8], i, j, m, n, l, k, b [8], c, t;
    scanf ("%d,%d", &i, &j);
    for (m = 0; m <= i - 1; m++) {
        for (n = 0; n <= j - 1; n++) {
            scanf ("%d", &a[m][n]);
        }
    }
    for (m = 0; m <= i - 1; m++) {
        b[m] = 0;
        for (n = 0; n <= j - 1; n++) {
            if (a[m][n] > a[m][b[m]])
                b[m] = n;
        }
        for (l = 0; l <= i - 1; l++) {
            if (a[l][b[m]] < a[m][b[m]]) {
                t = 0;
                break;
            }
            else
                t = 1;
        }
        if (t == 1) {
            c = m;
            break;
        }
    }
    if (t == 1)
        printf ("%d+%d", c, b[m]);
    else
        printf ("No");
}

