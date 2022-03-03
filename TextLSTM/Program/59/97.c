int main () {
    int n, i, j, m, day, num = 0;
    cin >> n;
    char a [n] [n], b [n] [n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    cin >> m;
    for (day = 2; day <= m; day++) {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++) {
                if (a[i][j] == '@') {
                    if (i - 1 >= 0 && a[i - 1][j] == '.')
                        b[i - 1][j] = '@';
                    if (i + 1 < n && a[i + 1][j] == '.')
                        b[i + 1][j] = '@';
                    if (j - 1 >= 0 && a[i][j - 1] == '.')
                        b[i][j - 1] = '@';
                    if (j + 1 < n && a[i][j + 1] == '.')
                        b[i][j + 1] = '@';
                }
            }
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                a[i][j] = b[i][j];
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (a[i][j] == '@')
                num++;
        }
    cout << num << endl;
    return 0;
}

