int main () {
    char a [100] [100];
    int m, n, num = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        for (int j = 1;
        j <= n; j++) {
            cin >> a[i - 1][j - 1];
        }
    }
    cin >> m;
    for (int k = 1;
    k <= m - 1; k++) {
        for (int x = 0;
        x < n; x++) {
            for (int y = 0;
            y < n; y++) {
                if (a[x][y] == '@') {
                    if (a[x - 1][y] == '.' && x != 0)
                        a[x - 1][y] = '!';
                    if (a[x + 1][y] == '.' && x != n - 1)
                        a[x + 1][y] = '!';
                    if (a[x][y - 1] == '.' && y != 0)
                        a[x][y - 1] = '!';
                    if (a[x][y + 1] == '.' && y != n - 1)
                        a[x][y + 1] = '!';
                }
            }
        }
        for (int z = 1;
        z <= n; z++) {
            for (int t = 1;
            t <= n; t++) {
                if (a[z - 1][t - 1] == '!')
                    a[z - 1][t - 1] = '@';
            }
        }
    }
    for (int p = 1;
    p <= n; p++) {
        for (int q = 1;
        q <= n; q++) {
            if (a[p - 1][q - 1] == '@')
                num = num + 1;
        }
    }
    cout << num << endl;
    return 0;
}

