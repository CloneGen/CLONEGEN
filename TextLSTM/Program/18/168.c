int a [100] [100] [100];

int main () {
    int n, i, j, k, sum [100] = {0}, l, min;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                cin >> a[i][j][k];
            }
        }
    }
    for (i = 0; i < n; i++) {
        l = n;
        while (l > 1) {
            for (j = 0; j < l; j++) {
                min = 100000;
                for (k = 0; k < l; k++) {
                    if (a[i][j][k] < min)
                        min = a[i][j][k];
                }
                for (k = 0; k < l; k++)
                    a[i][j][k] -= min;
            }
            for (k = 0; k < l; k++) {
                min = 100000;
                for (j = 0; j < l; j++) {
                    if (a[i][j][k] < min)
                        min = a[i][j][k];
                }
                for (j = 0; j < l; j++)
                    a[i][j][k] -= min;
            }
            sum[i] += a[i][1][1];
            for (j = 2; j < l; j++)
                for (k = 0; k < l; k++)
                    a[i][j - 1][k] = a[i][j][k];
            for (k = 2; k < l; k++)
                for (j = 0; j < l; j++)
                    a[i][j][k - 1] = a[i][j][k];
            l--;
        }
    }
    for (i = 0; i < n; i++)
        cout << sum[i] << endl;
    return 0;
}

