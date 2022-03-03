int main () {
    int t [100] [100] = {0}, i, j, n, row [2] = {0}, col [2] = {0};
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >> t[i][j];
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (t[i][j] == 0 && row[0] == 0)
                row[0] = i;
            if (t[n - i + 1][j] == 0 && row[1] == 0)
                row[1] = n - i + 1;
            if (t[j][i] == 0 && col[0] == 0)
                col[0] = i;
            if (t[n - j + 1][n - i + 1] == 0 && col[1] == 0)
                col[1] = n - i + 1;
        }
    }
    cout << (row[1] - row[0] - 1) * (col[1] - col[0] - 1) << endl;
    return 0;
}

