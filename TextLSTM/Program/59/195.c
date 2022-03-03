int main () {
    int n, i, j, m, s, t;
    char a [102] [102], b [102] [102];
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%s", &(a[i][1]));
    }
    scanf ("%d", &m);
    for (j = 0; j < n + 2; j++) {
        a[0][j] = '#';
        a[n + 1][j] = '#';
    }
    for (i = 0; i < n + 2; i++) {
        a[i][0] = '#';
        a[i][n + 1] = '#';
    }
    for (s = 2; s <= m; s++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                b[i][j] = a[i][j];
            }
        }
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (b[i][j] == '@') {
                    if (a[i][j + 1] != '#') {
                        a[i][j + 1] = '@';
                    }
                    if (a[i][j - 1] != '#') {
                        a[i][j - 1] = '@';
                    }
                    if (a[i + 1][j] != '#') {
                        a[i + 1][j] = '@';
                    }
                    if (a[i - 1][j] != '#') {
                        a[i - 1][j] = '@';
                    }
                }
            }
        }
    }
    t = 0;
    for (i = 0; i <= n + 1; i++) {
        for (j = 0; j <= n + 1; j++) {
            if (a[i][j] == '@') {
                t = t + 1;
            }
        }
    }
    printf ("%d", t);
    return 0;
}

