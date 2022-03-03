int main () {
    int n = 0, m = 0;
    cin >> n;
    char shuru [101] [101];
    for (int i = 0;
    i < n; i++) {
        for (int j = 0;
        j < n; j++) {
            cin >> shuru[i][j];
        }
    }
    cin >> m;
    for (int k = 1;
    k < m; k++) {
        for (int i = 0;
        i < n; i++) {
            for (int j = 0;
            j < n; j++) {
                if (shuru[i][j] == '@') {
                    if (((i - 1) >= 0) && shuru[i - 1][j] == '.')
                        shuru[i - 1][j] = 'a';
                    if (((i + 1) < n) && shuru[i + 1][j] == '.')
                        shuru[i + 1][j] = 'a';
                    if (((j - 1) >= 0) && shuru[i][j - 1] == '.')
                        shuru[i][j - 1] = 'a';
                    if (((j + 1) < n) && shuru[i][j + 1] == '.')
                        shuru[i][j + 1] = 'a';
                }
            }
        }
        for (int i = 0;
        i < n; i++) {
            for (int j = 0;
            j < n; j++) {
                if (shuru[i][j] == 'a')
                    shuru[i][j] = '@';
                else
                    continue;
            }
        }
    }
    int jishu = 0;
    for (int i = 0;
    i < n; i++) {
        for (int j = 0;
        j < n; j++) {
            if (shuru[i][j] == '@')
                jishu++;
            else
                continue;
        }
    }
    cout << jishu << endl;
    return 0;
}

