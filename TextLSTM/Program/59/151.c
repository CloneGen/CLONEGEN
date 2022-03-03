int main () {
    char a [1000] [101] [101] = {0};
    int n, m, number = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++)
        for (int k = 1;
        k <= n; k++)
            cin >> a[1][i][k];
    cin >> m;
    for (int h = 1;
    h <= m; h++)
        for (int i = 1;
        i <= n; i++)
            for (int k = 1;
            k <= n; k++) {
                if (a[h][i][k] == '@' && a[h][i + 1][k] == '.') {
                    a[h + 1][i + 1][k] = '@';
                    a[h + 1][i][k] = '@';
                }
                if (a[h][i][k] == '@' && a[h][i - 1][k] == '.') {
                    a[h + 1][i - 1][k] = '@';
                    a[h + 1][i][k] = '@';
                }
                if (a[h][i][k] == '@' && a[h][i][k + 1] == '.') {
                    a[h + 1][i][k + 1] = '@';
                    a[h + 1][i][k] = '@';
                }
                if (a[h][i][k] == '@' && a[h][i][k - 1] == '.') {
                    a[h + 1][i][k - 1] = '@';
                    a[h + 1][i][k] = '@';
                }
                if (a[h][i][k] == '#')
                    a[h + 1][i][k] = '#';
                if (a[h][i][k] == '.' && a[h][i + 1][k] != '@' && a[h][i - 1][k] != '@' && a[h][i][k + 1] != '@' && a[h][i][k - 1] != '@')
                    a[h + 1][i][k] = '.';
            }
    for (int i = 1;
    i <= n; i++)
        for (int k = 1;
        k <= n; k++) {
            if (a[m][i][k] == '#' || a[m][i][k] == '.')
                number++;
        }
    cout << n * n - number;
    return 0;
}

