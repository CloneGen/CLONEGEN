int bac [5] [11] [11];

void boom (int m, int n) {
    int i, j, d1, d2;
    if (n == 0)
        bac[n][5][5] = m;
    else
        boom (m, n - 1);
    if (n > 0)
        for (i = 1; i <= 9; i++)
            for (j = 1; j <= 9; j++) {
                bac[n][i][j] = bac[n - 1][i][j];
                for (d1 = -1; d1 <= 1; d1++)
                    for (d2 = -1; d2 <= 1; d2++)
                        bac[n][i][j] += bac[n - 1][i + d1][j + d2];
            }
}

int main () {
    int m, n, i, j, day;
    cin >> m >> n;
    for (i = 0; i <= 10; i++)
        for (j = 0; j <= 10; j++)
            for (day = 0; day <= 4; day++)
                bac[day][i][j] = 0;
    boom (m, n);
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 8; j++)
            cout << bac[n][i][j] << ' ';
        cout << bac[n][i][9] << endl;
    }
    cin >> i;
    return 0;
}

