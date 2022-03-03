int main () {
    int n, i, j, m, l, t;
    char a [100] [100], b [100] [100];
    cin >> n;
    for (i = 1; i < n + 1; i++) {
        for (j = 1; j < n + 1; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    cin >> m;
    for (l = 0; l < m - 1; l++) {
        for (i = 1; i < n + 1; i++) {
            for (j = 1; j < n + 1; j++) {
                b[i][j] = a[i][j];
            }
        }
        for (i = 1; i < n + 1; i++) {
            for (j = 1; j < n + 1; j++) {
                if (b[i][j] == '@') {
                    if (a[i - 1][j] == '.') {
                        a[i - 1][j] = '@';
                    }
                    if (a[i + 1][j] == '.') {
                        a[i + 1][j] = '@';
                    }
                    if (a[i][j - 1] == '.') {
                        a[i][j - 1] = '@';
                    }
                    if (a[i][j + 1] == '.') {
                        a[i][j + 1] = '@';
                    }
                }
            }
        }
    }
    t = 0;
    for (i = 1; i < n + 1; i++) {
        for (j = 1; j < n + 1; j++) {
            if (a[i][j] == '@') {
                t++;
            }
        }
    }
    cout << t << endl;
    return 0;
}

