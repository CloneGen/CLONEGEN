int main () {
    char a [102] [102];
    int n, i, j, ill, p, m;
    cin >> n;
    ill = 0;
    for (i = 0; i <= n + 1; i++)
        for (j = 0; j <= n + 1; j++)
            a[i][j] = '#';
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    cin >> m;
    for (p = 1; p < m; p++) {
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++) {
                if (a[i][j] == '.')
                    if (a[i + 1][j] == '@' || a[i - 1][j] == '@' || a[i][j + 1] == '@' || a[i][j - 1] == '@')
                        a[i][j] = '*';
            }
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++) {
                if (a[i][j] == '*')
                    a[i][j] = '@';
            }
    }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            if (a[i][j] == '@')
                ill++;
        }
    cout << ill;
    return 0;
}

