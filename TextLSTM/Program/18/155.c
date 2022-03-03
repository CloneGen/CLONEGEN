int main () {
    int n;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        int a [n] [n];
        for (int j = 0;
        j < n; j++) {
            for (int k = 0;
            k < n; k++) {
                cin >> a[j][k];
            }
        }
        int a11 = 0;
        for (int p = n;
        p >= 2; p--) {
            for (int j = 0;
            j < p; j++) {
                int min = a[j][0];
                for (int k = 1;
                k < p; k++) {
                    if (a[j][k] < min) {
                        min = a[j][k];
                    }
                }
                for (int k = 0;
                k < p; k++)
                    a[j][k] -= min;
            }
            for (int j = 0;
            j < p; j++) {
                int min = a[0][j];
                for (int k = 1;
                k < p; k++) {
                    if (a[k][j] < min) {
                        min = a[k][j];
                    }
                }
                for (int k = 0;
                k < p; k++)
                    a[k][j] -= min;
            }
            a11 += a[1][1];
            for (int j = 0;
            j < p; j++) {
                for (int k = 1;
                k < p - 1; k++) {
                    a[j][k] = a[j][k + 1];
                }
            }
            for (int j = 0;
            j < p; j++) {
                for (int k = 1;
                k < p - 1; k++) {
                    a[k][j] = a[k + 1][j];
                }
            }
        }
        cout << a11 << endl;
    }
    return 0;
}

