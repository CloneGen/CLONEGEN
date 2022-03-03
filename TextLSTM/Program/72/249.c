int main () {
    int m, n;
    cin >> m >> n;
    int a [m + 2] [n + 2];
    int i, j;
    for (i = 0; i < n + 2; i++)
        a[0][i] = 0;
    for (i = 0; i < n + 2; i++)
        a[m + 1][i] = 0;
    for (i = 0; i < m + 2; i++)
        a[i][0] = 0;
    for (i = 0; i < m + 2; i++)
        a[i][n + 1] = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j])
                cout << i - 1 << " " << j - 1 << endl;
    return 0;
}

