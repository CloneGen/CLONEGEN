int main () {
    int n, m, i, j, a, s, tj [102] [102];
    char zf [102] [102];
    scanf ("%d", &n);
    getchar ();
    for (i = 0; i < n; i++) {
        gets (zf [i]);
    }
    scanf ("%d", &m);
    s = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            tj[i][j] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (zf[i][j] == '@') {
                tj[i][j] = 1;
                s++;
            }
        }
    }
    a = 1;
    while (a < m) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (tj[i][j] == 1) {
                    if (i > 0 && zf[i - 1][j] == '.') {
                        zf[i - 1][j] = '@';
                        s++;
                    }
                    if (i < n - 1 && zf[i + 1][j] == '.') {
                        zf[i + 1][j] = '@';
                        s++;
                    }
                    if (j > 0 && zf[i][j - 1] == '.') {
                        zf[i][j - 1] = '@';
                        s++;
                    }
                    if (j < n - 1 && zf[i][j + 1] == '.') {
                        zf[i][j + 1] = '@';
                        s++;
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (zf[i][j] == '@') {
                    tj[i][j] = 1;
                }
            }
        }
        a++;
    }
    printf ("%d", s);
    return 0;
}

