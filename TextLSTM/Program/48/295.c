int main () {
    int i, j, m, n, a [9] [9], b [9] [9], x, y, d;
    cin >> m >> n;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            a[i][j] = 0;
    a[4][4] = m;
    for (d = 1; d <= n; d++) {
        for (x = 0; x < 9; x++)
            for (y = 0; y < 9; y++)
                b[x][y] = 0;
        for (i = 1; i < 8; i++) {
            for (j = 1; j < 8; j++) {
                if (a[i][j] != 0) {
                    b[i - 1][j] = b[i - 1][j] + a[i][j];
                    b[i - 1][j - 1] = b[i - 1][j - 1] + a[i][j];
                    b[i - 1][j + 1] = b[i - 1][j + 1] + a[i][j];
                    b[i][j + 1] = b[i][j + 1] + a[i][j];
                    b[i][j - 1] = b[i][j - 1] + a[i][j];
                    b[i + 1][j] = b[i + 1][j] + a[i][j];
                    b[i + 1][j - 1] = b[i + 1][j - 1] + a[i][j];
                    b[i + 1][j + 1] = b[i + 1][j + 1] + a[i][j];
                    b[i][j] = b[i][j] + 2 * a[i][j];
                }
            }
        }
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                a[i][j] = b[i][j];
            }
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (j == 0) {
                cout << a[i][j];
            }
            else {
                cout << " " << a[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}

