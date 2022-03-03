int main () {
    int i, j, n, m, t = 0, k;
    char a [102] [102], b [102] [102];
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    cin >> m;
    for (k = 0; k < m - 1; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (b[i][j] == '@') {
                    if (b[i - 1][j] != '#') {
                        a[i - 1][j] = '@';
                    }
                    if (b[i + 1][j] != '#') {
                        a[i + 1][j] = '@';
                    }
                    if (b[i][j - 1] != '#') {
                        a[i][j - 1] = '@';
                    }
                    if (b[i][j + 1] != '#') {
                        a[i][j + 1] = '@';
                    }
                }
            }
        }
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                b[i][j] = a[i][j];
            }
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (a[i][j] == '@') {
                t++;
            }
        }
    }
    cout << t << endl;
    return 0;
}

