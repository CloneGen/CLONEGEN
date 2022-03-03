int main () {
    int a [10] [10] [5];
    int m;
    short int i, j, k, n, t = 2;
    for (k = 0; k <= 4; k++)
        for (i = 1; i <= 9; i++)
            for (j = 1; j <= 9; j++)
                a[i][j][k] = 0;
    cin >> a[5][5][0] >> n;
    m = a[5][5][0];
    a[5][5][1] = 2 * m;
    a[4][4][1] = a[4][6][1] = a[6][4][1] = a[6][6][1] = a[4][5][1] = a[5][4][1] = a[6][5][1] = a[5][6][1] = m;
    while (t <= n) {
        for (i = 1; i <= 9; i++)
            for (j = 1; j <= 9; j++) {
                if (a[i][j][t - 1] != 0) {
                    a[i - 1][j][t] += a[i][j][t - 1];
                    a[i][j - 1][t] += a[i][j][t - 1];
                    a[i + 1][j][t] += a[i][j][t - 1];
                    a[i][j + 1][t] += a[i][j][t - 1];
                    a[i][j][t] += 2 * a[i][j][t - 1];
                    a[i - 1][j + 1][t] += a[i][j][t - 1];
                    a[i + 1][j - 1][t] += a[i][j][t - 1];
                    a[i - 1][j - 1][t] += a[i][j][t - 1];
                    a[i + 1][j + 1][t] += a[i][j][t - 1];
                }
            }
        t++;
    }
    for (i = 1; i <= 9; i++)
        for (j = 1; j <= 9; j++) {
            cout << a[i][j][n];
            if (j == 9)
                cout << endl;
            else
                cout << ' ';
        }
    return 0;
}

