int main () {
    int a [100] [100];
    int n, i = 0, j, k, l, min, sum = 0;
    cin >> n;
    while (i < n) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                cin >> a[j][k];
            }
        }
        for (l = 0; l < n - 1; l++) {
            for (j = 0; j < n - l; j++) {
                min = a[j][0];
                for (k = 0; k < n - l; k++) {
                    if (min > a[j][k]) {
                        min = a[j][k];
                    }
                }
                for (k = 0; k < n - l; k++) {
                    a[j][k] -= min;
                }
            }
            for (k = 0; k < n - l; k++) {
                min = a[0][k];
                for (j = 0; j < n - l; j++) {
                    if (min > a[j][k]) {
                        min = a[j][k];
                    }
                }
                for (j = 0; j < n - l; j++) {
                    a[j][k] -= min;
                }
            }
            sum += a[1][1];
            for (j = 0; j < n - l; j++) {
                for (k = 1; k < n - l; k++) {
                    a[j][k] = a[j][k + 1];
                }
            }
            for (k = 0; k < n - l; k++) {
                for (j = 1; j < n - l; j++) {
                    a[j][k] = a[j + 1][k];
                }
            }
        }
        cout << sum << endl;
        sum = 0;
        i++;
    }
}

