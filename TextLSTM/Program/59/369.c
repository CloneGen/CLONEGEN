int main () {
    int n, i, j, m, k, s;
    char a [110] [110];
    int b [110] [110];
    s = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = 0;
            cin >> a[i][j];
        }
    }
    cin >> m;
    for (k = 0; k < m - 1; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] == '@') {
                    if (b[i][j] == k) {
                        if (i - 1 >= 0) {
                            if (a[i - 1][j] == '.') {
                                a[i - 1][j] = '@';
                                b[i - 1][j]++;
                            }
                        }
                        if (j - 1 >= 0) {
                            if (a[i][j - 1] == '.') {
                                a[i][j - 1] = '@';
                                b[i][j - 1]++;
                            }
                        }
                        if (i + 1 < n) {
                            if (a[i + 1][j] == '.') {
                                a[i + 1][j] = '@';
                                b[i + 1][j]++;
                            }
                        }
                        if (j + 1 < n) {
                            if (a[i][j + 1] == '.') {
                                a[i][j + 1] = '@';
                                b[i][j + 1]++;
                            }
                        }
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                b[i][j] = k + 1;
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == '@')
                s++;
        }
    }
    cout << s;
    return 0;
}

