void main () {
    int a [8] [8], b [8] [8], n, m, i, j, k, x, l, y = 0, h;
    scanf ("%d,%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf ("%5d", &a[i][j]);
            b[i][j] = a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m - 1; j++) {
            if (a[i][j] > a[i][j + 1]) {
                x = a[i][j];
                a[i][j] = a[i][j + 1];
                a[i][j + 1] = x;
            }
        }
        for (l = 0; l < n; l++) {
            if (b[i][l] == a[i][m - 1])
                break;
        }
        k = 0;
        for (h = 0; h < n; h++) {
            if (b[h][l] >= b[i][l])
                k++;
        }
        if (k == n)
            y++;
        if (y > 0) {
            printf ("%d+%d", i, l);
            break;
        }
    }
    if (y == 0)
        printf ("No");
}

