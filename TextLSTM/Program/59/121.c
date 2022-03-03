int main () {
    int n, m, i, j, k, sum = 0;
    char str [105] [105];
    int start [105] [105] = {0};
    cin >> n;
    cin.get ();
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            str[i][j] = cin.get ();
        cin.get ();
    }
    cin >> m;
    for (k = 2; k <= m; k++) {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++) {
                if (str[i][j] == '@')
                    start[i][j] = 1;
            }
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (start[i][j] == 1) {
                    if (str[i - 1][j] == '.')
                        str[i - 1][j] = '@';
                    if (str[i + 1][j] == '.')
                        str[i + 1][j] = '@';
                    if (str[i][j - 1] == '.')
                        str[i][j - 1] = '@';
                    if (str[i][j + 1] == '.')
                        str[i][j + 1] = '@';
                }
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (str[i][j] == '@')
                sum++;
    cout << sum << endl;
    return 0;
}

