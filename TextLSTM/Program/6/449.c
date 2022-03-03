int main () {
    int k, m, n, a [100] [100], sum, p, q;
    int i, j, h;
    cin >> k;
    for (h = 1; h <= k; h++) {
        cin >> m >> n;
        p = 0;
        q = 0;
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                cin >> a[i][j];
                p = p + a[i][j];
            }
        }
        for (i = 2; i < m; i++) {
            for (j = 2; j < n; j++)
                q = q + a[i][j];
        }
        sum = p - q;
        cout << sum << endl;
    }
    return 0;
}

