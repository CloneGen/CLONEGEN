int main () {
    int n, row, col, m, k, N [100], d;
    char a [100] [100], b [100] [100];
    scanf ("%d", &n);
    scanf ("\n");
    N[1] = 0;
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            scanf ("%c", &a[row][col]);
            b[row][col] = a[row][col];
            if (a[row][col] == '@') {
                N[1]++;
            }
        }
        scanf ("\n");
    }
    scanf ("%d", &m);
    for (row = 0; row <= n + 1; row++) {
        for (col = 0; col <= n + 1; col++) {
            if (row == 0 || row == n + 1 || col == 0 || col == n + 1) {
                a[row][col] = '#';
                b[row][col] = a[row][col];
            }
        }
    }
    for (k = 1; k <= m - 1; k++) {
        d = 0;
        N[k + 1] = 0;
        for (row = 1; row <= n; row++) {
            for (col = 1; col <= n; col++) {
                if (a[row][col] == '@') {
                    if (a[row][col + 1] == '.') {
                        b[row][col + 1] = '@';
                    }
                    else {
                        ;
                    }
                    if (a[row][col - 1] == '.') {
                        b[row][col - 1] = '@';
                    }
                    else {
                        ;
                    }
                    if (a[row - 1][col] == '.') {
                        b[row - 1][col] = '@';
                    }
                    else {
                        ;
                    }
                    if (a[row + 1][col] == '.') {
                        b[row + 1][col] = '@';
                    }
                    else {
                        ;
                    }
                }
            }
        }
        for (row = 1; row <= n; row++) {
            for (col = 1; col <= n; col++) {
                a[row][col] = b[row][col];
                if (a[row][col] == '@') {
                    N[k + 1]++;
                }
            }
        }
    }
    printf ("%d", N[m]);
    return 0;
}

