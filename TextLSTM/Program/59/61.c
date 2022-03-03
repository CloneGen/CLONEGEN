int main () {
    char a [101] [101] = {{0}};
    int n, count, m;
    count = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++)
        for (int j = 1;
        j <= n; j++)
            cin >> a[i][j];
    cin >> m;
    for (int h = 1;
    h <= m - 1; h++) {
        int b [101] [101] = {{0}};
        for (int i = 1;
        i <= n; i++)
            for (int j = 1;
            j <= n; j++)
                if (a[i][j] == '@' && b[i][j] == 0) {
                    if (a[i - 1][j] == '.') {
                        a[i - 1][j] = '@';
                        b[i - 1][j] = 1;
                    }
                    if (a[i + 1][j] == '.') {
                        a[i + 1][j] = '@';
                        b[i + 1][j] = 1;
                    }
                    if (a[i][j - 1] == '.') {
                        a[i][j - 1] = '@';
                        b[i][j - 1] = 1;
                    }
                    if (a[i][j + 1] == '.') {
                        a[i][j + 1] = '@';
                        b[i][j + 1] = 1;
                    }
                }
    }
    for (int i = 1;
    i <= n; i++)
        for (int j = 1;
        j <= n; j++)
            if (a[i][j] == '@')
                count++;
    cout << count << endl;
    return 0;
}

