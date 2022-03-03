int main () {
    int n, i, j, m, d, cnt = 0, day [102] [102] = {0};
    char a [102] [102];
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] == '@')
                day[i][j] = 1;
        }
    cin >> m;
    for (d = 2; d <= m; d++) {
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++) {
                if (a[i][j] == '@' && day[i][j] == d - 1) {
                    day[i][j] = d;
                    if (a[i][j - 1] == '.') {
                        a[i][j - 1] = '@';
                        day[i][j - 1] = d;
                    }
                    if (a[i - 1][j] == '.') {
                        a[i - 1][j] = '@';
                        day[i - 1][j] = d;
                    }
                    if (a[i][j + 1] == '.') {
                        a[i][j + 1] = '@';
                        day[i][j + 1] = d;
                    }
                    if (a[i + 1][j] == '.') {
                        a[i + 1][j] = '@';
                        day[i + 1][j] = d;
                    }
                }
            }
    }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            if (a[i][j] == '@')
                cnt++;
        }
    cout << cnt << endl;
    return 0;
}

