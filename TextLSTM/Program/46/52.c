int main () {
    int n, m;
    int i, j, a, c, b;
    int sz [100] [100];
    scanf ("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf ("%d", &sz[i][j]);
        }
    }
    if (m > n) {
        b = n;
    }
    else {
        b = m;
    }
    if (b % 2 == 1) {
        c = (b + 1) / 2;
    }
    else {
        c = b / 2;
    }
    for (a = 0; a < c; a++) {
        if (a < m - a) {
            for (j = a; j < m - a; j++) {
                printf ("%d\n", sz[a][j]);
            }
            if (1 + a < n - a) {
                for (i = 1 + a; i < n - a; i++) {
                    printf ("%d\n", sz[i][m - a - 1]);
                }
                if (m - a - 2 >= a) {
                    for (j = m - a - 2; j >= a; j--) {
                        printf ("%d\n", sz[n - a - 1][j]);
                    }
                    if (n - a - 2 > a) {
                        for (i = n - a - 2; i > a; i--) {
                            printf ("%d\n", sz[i][a]);
                        }
                    }
                }
            }
        }
    }
    return 0;
}

