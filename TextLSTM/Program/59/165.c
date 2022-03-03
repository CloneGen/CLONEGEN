int main () {
    int n, m;
    cin >> n;
    char a [n] [n];
    for (int i = 0;
    i <= n - 1; ++i)
        for (int j = 0;
        j <= n - 1; ++j)
            cin >> a[i][j];
    cin >> m;
    for (int day = 1;
    day < m; day++) {
        for (int i = 0;
        i <= n - 1; ++i)
            for (int j = 0;
            j <= n - 1; ++j) {
                if (a[i][j] == '@') {
                    if (a[i - 1][j] == '.' && i - 1 >= 0)
                        a[i - 1][j] = 'A';
                    if (a[i + 1][j] == '.' && i + 1 <= n - 1)
                        a[i + 1][j] = 'A';
                    if (a[i][j - 1] == '.' && j - 1 >= 0)
                        a[i][j - 1] = 'A';
                    if (a[i][j + 1] == '.' && j + 1 <= n - 1)
                        a[i][j + 1] = 'A';
                }
            }
        for (int i = 0;
        i <= n - 1; ++i)
            for (int j = 0;
            j <= n - 1; ++j)
                if (a[i][j] == 'A')
                    a[i][j] = '@';
    }
    int count = 0;
    for (int i = 0;
    i <= n - 1; ++i)
        for (int j = 0;
        j <= n - 1; ++j)
            if (a[i][j] == '@')
                count++;
    cout << count;
    return 0;
}

