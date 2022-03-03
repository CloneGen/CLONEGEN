main () {
    int h, l, i, m, n, j, y;
    int a [11] [11], b [11] [11];
    scanf ("%d %d", &m, &n);
    for (h = 0; h < 11; h++) {
        for (l = 0; l < 11; l++) {
            a[h][l] = 0;
            b[h][l] = 0;
        }
    }
    a[5][5] = m;
    b[5][5] = m;
    for (i = 0; i < n; i++) {
        for (y = 0; y <= n; y++) {
            for (j = 0; j <= n; j++) {
                {
                    a[5 - y][5 - j] = 2 * b[5 - y][5 - j] + b[4 - y][4 - j] + b[4 - y][5 - j] + b[4 - y][6 - j] + b[5 - y][4 - j] + b[5 - y][6 - j] + b[6 - y][4 - j] + b[6 - y][5 - j] + b[6 - y][6 - j];
                }
                a[5 + y][5 + j] = a[5 - y][5 - j];
                a[5 - y][5 + j] = a[5 - y][5 - j];
                a[5 + y][5 - j] = a[5 - y][5 - j];
            }
        }
        for (h = 0; h < 11; h++) {
            for (l = 0; l < 11; l++) {
                b[h][l] = a[h][l];
                ;
            }
        }
    }
    for (h = 1; h < 10; h++) {
        for (l = 1; l < 10; l++) {
            if (l != 9) {
                printf ("%d ", b[h][l]);
            }
            else {
                printf ("%d", b[h][l]);
            }
        }
        printf ("\n");
    }
    getchar ();
    getchar ();
    getchar ();
}

