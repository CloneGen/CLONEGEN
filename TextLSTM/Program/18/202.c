int main () {
    int n, a [100] [100], i, j, k, sum, min, m;
    cin >> n;
    for (k = 1; k <= n; k++) {
        sum = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        m = n;
        while (m > 1) {
            for (i = 0; i < m; i++) {
                min = 1000;
                for (j = 0; j < m; j++) {
                    if (a[i][j] < min)
                        min = a[i][j];
                }
                for (j = 0; j < m; j++)
                    a[i][j] -= min;
            }
            for (j = 0; j < m; j++) {
                min = 1000;
                for (i = 0; i < m; i++) {
                    if (a[i][j] < min)
                        min = a[i][j];
                }
                for (i = 0; i < m; i++)
                    a[i][j] -= min;
            }
            sum += a[1][1];
            for (i = 0; i < m; i++)
                for (j = 2; j < m; j++)
                    a[i][j - 1] = a[i][j];
            for (j = 0; j < m; j++)
                for (i = 2; i < m; i++)
                    a[i - 1][j] = a[i][j];
            m--;
        }
        cout << endl << sum;
    }
    return 0;
}

