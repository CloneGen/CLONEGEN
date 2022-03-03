int main () {
    int i, j, n, m, k, count = 0;
    char a [102] [102] [102];
    cin >> n;
    for (k = 1; k <= 101; k++) {
        for (i = 0; i <= 101; i++) {
            for (j = 0; j <= 101; j++)
                a[k][i][j] = '.';
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            cin >> a[1][i][j];
    }
    cin >> m;
    for (k = 1; k < m; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (a[k][i][j] == '.') {
                    if ((a[k][i - 1][j] == '@') || (a[k][i + 1][j] == '@') || (a[k][i][j + 1] == '@') || (a[k][i][j - 1] == '@'))
                        a[k + 1][i][j] = '@';
                }
                if (a[k][i][j] == '@')
                    a[k + 1][i][j] = '@';
                if (a[k][i][j] == '#')
                    a[k + 1][i][j] = '#';
            }
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            if (a[m][i][j] == '@')
                count = count + 1;
    }
    cout << count << endl;
    return 0;
}

