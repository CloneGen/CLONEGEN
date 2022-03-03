int main () {
    char a [101] [101];
    int i, j, n, m, s = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> m;
    while (m > 0) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (a[i][j] == '*')
                    a[i][j] = '@';
            }
        }
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (a[i][j] == '@') {
                    if (a[i - 1][j] == '.' && i > 1)
                        a[i - 1][j] = '*';
                    if (a[i + 1][j] == '.' && i < n)
                        a[i + 1][j] = '*';
                    if (a[i][j - 1] == '.' && j > 1)
                        a[i][j - 1] = '*';
                    if (a[i][j + 1] == '.' && j < n)
                        a[i][j + 1] = '*';
                }
            }
        }
        m--;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (a[i][j] == '@')
                s = s + 1;
        }
    }
    cout << s;
    return 0;
}

