int main () {
    int a [101] [101], i, j, k = 0, l = 1, m, n, c, d;
    cin >> m >> n;
    c = m, d = n;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    j = 0;
    while (j < c * d) {
        for (i = l; i <= n; i++) {
            if (j >= c * d)
                break;
            cout << a[k + 1][i] << endl;
            j = j + 1;
        }
        for (k = i - 1, i = l + 1; i <= m; i++) {
            if (j >= c * d)
                break;
            cout << a[i][k] << endl;
            j = j + 1;
        }
        for (k = i - 1, i = n - 1; i >= l; i--) {
            if (j >= c * d)
                break;
            cout << a[k][i] << endl;
            j = j + 1;
        }
        for (k = i + 1, i = m - 1; i >= l + 1; i--) {
            if (j >= c * d)
                break;
            cout << a[i][k] << endl;
            j = j + 1;
        }
        n = n - 1;
        m = m - 1;
        l = l + 1;
    }
    return 0;
}

