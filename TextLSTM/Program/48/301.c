int main () {
    int Ground [5] [11] [11] = {0};
    cin >> Ground[0][5][5];
    int n;
    cin >> n;
    int day, j, k;
    for (day = 1; day <= n; day++)
        for (j = 5 - day; j <= 5 + day; j++)
            for (k = 5 - day; k <= 5 + day; k++)
                Ground[day][j][k] = Ground[day - 1][j][k] * 2 + Ground[day - 1][j - 1][k - 1] + Ground[day - 1][j - 1][k] + Ground[day - 1][j - 1][k + 1] + Ground[day - 1][j][k - 1] + Ground[day - 1][j][k + 1] + Ground[day - 1][j + 1][k - 1] + Ground[day - 1][j + 1][k] + Ground[day - 1][j + 1][k + 1];
    for (j = 1; j <= 9; j++) {
        cout << Ground[n][j][1];
        for (k = 2; k <= 9; k++)
            cout << ' ' << Ground[n][j][k];
        cout << endl;
    }
    return 0;
}

