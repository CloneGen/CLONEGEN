int main () {
    int n, a [100] [100], i, j, k, l, min, sum;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                cin >> a[j][k];
            }
        }
        sum = 0;
        for (j = n; j > 1; j--) {
            for (k = 0; k < j; k++) {
                min = a[k][0];
                for (l = 0; l < j; l++) {
                    if (min > a[k][l]) {
                        min = a[k][l];
                    }
                }
                for (l = 0; l < j; l++) {
                    a[k][l] = a[k][l] - min;
                }
            }
            for (k = 0; k < j; k++) {
                min = a[0][k];
                for (l = 0; l < j; l++) {
                    if (min > a[l][k]) {
                        min = a[l][k];
                    }
                }
                for (l = 0; l < j; l++) {
                    a[l][k] = a[l][k] - min;
                }
            }
            sum = sum + a[1][1];
            for (k = 1; k < j - 1; k++) {
                a[k][0] = a[k + 1][0];
                a[0][k] = a[0][k + 1];
            }
            for (k = 1; k < j - 1; k++) {
                for (l = 1; l < j - 1; l++) {
                    a[k][l] = a[k + 1][l + 1];
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}

