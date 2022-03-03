int main () {
    char a [102] [102];
    int m, n, i, j, k, p = 0;
    int b [200] [200], c [200] [200];
    cin >> m;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= m; j++)
            cin >> a[i][j];
    cin >> n;
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= m; j++) {
            if (a[i][j] == '.')
                b[i + 1][j + 1] = 0;
            if (a[i][j] == '#')
                b[i + 1][j + 1] = -10000;
            if (a[i][j] == '@')
                b[i + 1][j + 1] = 1;
        }
    }
    for (i = 2; i <= m + 1; i++) {
        for (j = 2; j <= m + 1; j++) {
            c[i][j] = 0;
        }
    }
    for (k = 0; k < n - 1; k++) {
        for (i = 2; i <= m + 1; i++) {
            for (j = 2; j <= m + 1; j++) {
                if (b[i][j] > 0) {
                    c[i][j] = 1;
                }
            }
        }
        for (i = 2; i <= m + 1; i++) {
            for (j = 2; j <= m + 1; j++) {
                if (c[i][j] == 1) {
                    b[i][j + 1]++;
                    b[i][j - 1]++;
                    b[i + 1][j]++;
                    b[i - 1][j]++;
                }
            }
        }
        for (i = 2; i <= m + 1; i++) {
            for (j = 2; j <= m + 1; j++) {
                c[i][j] = 0;
            }
        }
    }
    for (i = 2; i <= m + 1; i++) {
        for (j = 2; j <= m + 1; j++) {
            if (b[i][j] > 0)
                p++;
        }
    }
    cout << p;
    return 0;
}

