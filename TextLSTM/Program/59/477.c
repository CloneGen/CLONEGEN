int main () {
    int n, i, j, k, m, result = 0;
    char s [101] [101], s1 [101] [101], s2 [101] [101];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", &s[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            s1[i + 1][j + 1] = s[i][j];
            s2[i][j] = s[i][j];
        }
    }
    scanf ("%d", &m);
    for (i = 0; i <= n + 1; i++) {
        for (j = 0; j <= n + 1; j++) {
            if (i == 0 || i == n + 1 || j == 0 || j == n + 1) {
                s1[i][j] = '#';
            }
        }
    }
    for (k = 1; k < m; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (s1[i][j] == '@') {
                    s2[i - 1][j - 1] = '@';
                    if (s1[i - 1][j] != '#') {
                        s2[i - 2][j - 1] = '@';
                    }
                    if (s1[i + 1][j] != '#') {
                        s2[i][j - 1] = '@';
                    }
                    if (s1[i][j - 1] != '#') {
                        s2[i - 1][j - 2] = '@';
                    }
                    if (s1[i][j + 1] != '#') {
                        s2[i - 1][j] = '@';
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (s2[i][j] == '@') {
                    s1[i + 1][j + 1] = s2[i][j];
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (s2[i][j] == '@') {
                result++;
            }
        }
    }
    printf ("%d", result);
    return 0;
}

