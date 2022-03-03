int main () {
    int n, m, sum;
    int i, p, q, r, s;
    char f [102] [102], g [102] [102] = {0};
    scanf ("%d", &n);
    for (p = 1; p < n + 1; p++) {
        for (q = 1; q < n + 1; q++) {
            scanf ("%c", &f[p][q]);
            if (f[p][q] == '\n') {
                q--;
            }
        }
    }
    scanf ("%d", &m);
    for (i = 1; i < m; i++) {
        for (p = 1; p < n + 1; p++) {
            for (q = 1; q < n + 1; q++) {
                if (f[p][q] == '@') {
                    if (f[p - 1][q] == '.') {
                        g[p - 1][q] = '@';
                    }
                    if (f[p][q - 1] == '.') {
                        g[p][q - 1] = '@';
                    }
                    if (f[p][q + 1] == '.') {
                        g[p][q + 1] = '@';
                    }
                    if (f[p + 1][q] == '.') {
                        g[p + 1][q] = '@';
                    }
                }
            }
        }
        for (p = 1; p < n + 1; p++) {
            for (q = 1; q < n + 1; q++) {
                if (g[p][q] == '@') {
                    f[p][q] = '@';
                }
            }
        }
    }
    for (p = 1, sum = 0; p < n + 1; p++) {
        for (q = 1; q < n + 1; q++) {
            if (f[p][q] == '@') {
                sum++;
            }
        }
    }
    printf ("%d", sum);
lp :
    return 0;
}

