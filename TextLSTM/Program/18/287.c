int main () {
    int t, k, i, j, n, a [101] [101], sum, min;
    cin >> n;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        t = n;
        sum = 0;
        while (t > 1) {
            for (i = 0; i < t; i++) {
                min = a[i][0];
                for (j = 0; j < t; j++) {
                    if (a[i][j] < min) {
                        min = a[i][j];
                    }
                }
                for (j = 0; j < t; j++) {
                    a[i][j] = a[i][j] - min;
                }
            }
            for (j = 0; j < t; j++) {
                min = a[0][j];
                for (i = 0; i < t; i++) {
                    if (a[i][j] < min) {
                        min = a[i][j];
                    }
                }
                for (i = 0; i < t; i++) {
                    a[i][j] = a[i][j] - min;
                }
            }
            sum = sum + a[1][1];
            for (i = 1; i < t - 1; i++) {
                for (j = 0; j < t; j++) {
                    a[i][j] = a[i + 1][j];
                }
            }
            for (j = 1; j < t - 1; j++) {
                for (i = 0; i < t + 1; i++) {
                    a[i][j] = a[i][j + 1];
                }
            }
            t--;
        }
        cout << sum << endl;
    }
    return 0;
}

