int main () {
    int m, n, i, j, k, t = 0;
    char a [100] [100];
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> m;
    for (k = 0; k < m - 1; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] == '@') {
                    if (j + 1 < n && a[i][j + 1] == '.') {
                        a[i][j + 1] = '$';
                    }
                    if (i + 1 < n && a[i + 1][j] == '.') {
                        a[i + 1][j] = '$';
                    }
                    if (j - 1 >= 0 && a[i][j - 1] == '.') {
                        a[i][j - 1] = '$';
                    }
                    if (i - 1 >= 0 && a[i - 1][j] == '.') {
                        a[i - 1][j] = '$';
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] == '$') {
                    a[i][j] = '@';
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == '@') {
                t++;
            }
        }
    }
    cout << t;
    return 0;
}

