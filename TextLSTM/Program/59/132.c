int main () {
    char a [102] [102];
    int b [102] [102], n, m, i, j, k, l = 0;
    cin >> n;
    cin.get ();
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= n - 2; j++)
            cin >> a[i][j];
        cin >> a[i][j];
        cin.get ();
    }
    cin >> m;
    for (i = 0; i <= n - 1; i++)
        for (j = 0; j <= n - 1; j++)
            if (a[i][j] == '@')
                b[i][j] = 1;
    for (k = 2; k <= m; k++) {
        l = 0;
        for (i = 0; i <= n - 1; i++) {
            for (j = 0; j <= n - 1; j++) {
                if (a[i][j] == '@') {
                    if (a[i - 1][j] == '.')
                        b[i - 1][j] = 1;
                    if (a[i + 1][j] == '.')
                        b[i + 1][j] = 1;
                    if (a[i][j - 1] == '.')
                        b[i][j - 1] = 1;
                    if (a[i][j + 1] == '.')
                        b[i][j + 1] = 1;
                }
            }
        }
        for (i = 0; i <= n - 1; i++)
            for (j = 0; j <= n - 1; j++)
                if (b[i][j] == 1) {
                    a[i][j] = '@';
                    l++;
                }
    }
    cout << l;
    return 0;
}

