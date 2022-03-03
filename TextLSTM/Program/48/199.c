int main () {
    int bac [5] [13] [13] = {0}, m, n, day, i, j, k, l;
    cin >> m >> n;
    bac[0][5][5] = m;
    for (day = 1; day <= n; day++) {
        for (int i = 1;
        i <= 9; i++) {
            for (j = 1; j <= 9; j++) {
                bac[day][i][j] = bac[day - 1][i - 1][j - 1] + bac[day - 1][i - 1][j] + bac[day - 1][i - 1][j + 1] + bac[day - 1][i][j - 1] + bac[day - 1][i][j + 1] + bac[day - 1][i + 1][j - 1] + bac[day - 1][i + 1][j] + bac[day - 1][i + 1][j + 1] + 2 * bac[day - 1][i][j];
            }
        }
    }
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 8; j++)
            cout << bac[n][i][j] << ' ';
        cout << bac[n][i][9] << endl;
    }
    return 0;
}

