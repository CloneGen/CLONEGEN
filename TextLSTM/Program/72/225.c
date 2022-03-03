int main () {
    int m, n, i, j, a [23] [23], b [23] [23];
    cin >> m >> n;
    for (i = 0; i < 23; i++) {
        for (j = 0; j < 23; j++) {
            b[i][j] = 0;
        }
    }
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i <= n + 1; i++) {
        a[0][i] = 0;
        a[m + 1][i] = 0;
    }
    for (i = 0; i < m + 1; i++) {
        a[i][0] = 0;
        a[i][n + 1] = 0;
    }
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if ((a[i][j] >= a[i][j + 1]) && (a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i - 1][j])) {
                b[i][j] = 1;
            }
        }
    }
    for (i = 0; i < 23; i++) {
        for (j = 0; j < 23; j++) {
            if (b[i][j] == 1) {
                cout << i - 1 << " " << j - 1 << endl;
            }
        }
    }
    return 0;
}

