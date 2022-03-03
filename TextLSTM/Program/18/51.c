int main () {
    int n, m, i, j, k, sum, min;
    cin >> m;
    for (i = 1; i <= m; i++) {
        int a [m] [m];
        for (j = 0; j < m; j++)
            for (k = 0; k < m; k++)
                cin >> a[j][k];
        sum = 0;
        for (n = m; n > 1; n--) {
            for (j = 0; j < n; j++) {
                min = a[j][0];
                for (k = 1; k < n; k++) {
                    if (a[j][k] < min) {
                        min = a[j][k];
                    }
                }
                for (k = 0; k < n; k++) {
                    a[j][k] = a[j][k] - min;
                }
            }
            for (k = 0; k < n; k++) {
                min = a[0][k];
                for (j = 1; j < n; j++) {
                    if (a[j][k] < min) {
                        min = a[j][k];
                    }
                }
                for (j = 0; j < n; j++) {
                    a[j][k] = a[j][k] - min;
                }
            }
            sum = sum + a[1][1];
            for (j = 1; j < n - 1; j++)
                for (k = 0; k < n; k++) {
                    a[j][k] = a[j + 1][k];
                }
            for (k = 1; k < n - 1; k++)
                for (j = 0; j < n; j++) {
                    a[j][k] = a[j][k + 1];
                }
        }
        cout << sum << endl;
    }
    return 0;
}

