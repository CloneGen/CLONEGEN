int main () {
    int a [50] [50] [50];
    int max [101] = {0};
    int i, j, k, m, n, min, t = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            for (k = 1; k <= n; k++)
                cin >> a[i][j][k];
    for (i = 1; i <= n; i++) {
        for (t = 0; t < n - 1; t++) {
            for (j = 1; j <= n - t; j++) {
                min = a[i][j][1];
                for (k = 1; k <= n - t; k++) {
                    if (min > a[i][j][k])
                        min = a[i][j][k];
                }
                for (k = 1; k <= n - t; k++)
                    a[i][j][k] = a[i][j][k] - min;
            }
            for (k = 1; k <= n - t; k++) {
                min = a[i][1][k];
                for (j = 1; j <= n - t; j++) {
                    if (min > a[i][j][k])
                        min = a[i][j][k];
                }
                for (j = 1; j <= n - t; j++)
                    a[i][j][k] = a[i][j][k] - min;
            }
            max[i] = max[i] + a[i][2][2];
            for (j = 2; j <= n - t - 1; j++) {
                for (k = 1; k <= n - t; k++) {
                    a[i][j][k] = a[i][j + 1][k];
                }
            }
            for (k = 2; k <= n - t - 1; k++) {
                for (j = 1; j <= n - t; j++)
                    a[i][j][k] = a[i][j][k + 1];
            }
        }
    }
    for (i = 1; i <= n; i++)
        cout << max[i] << endl;
    return 0;
}

