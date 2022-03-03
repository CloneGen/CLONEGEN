int main () {
    int n;
    cin >> n;
    int q;
    q = n;
    int a [150] [150], sum = 0, i, j, k, l, m, p, min;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                cin >> a[j][k];
            }
        }
        while (n != 1) {
            for (j = 0; j < n; j++) {
                min = a[j][0];
                for (l = 1; l < n; l++) {
                    if (min > a[j][l])
                        min = a[j][l];
                }
                for (m = 0; m < n; m++) {
                    a[j][m] = a[j][m] - min;
                }
            }
            for (j = 0; j < n; j++) {
                min = a[0][j];
                for (l = 1; l < n; l++) {
                    if (min > a[l][j])
                        min = a[l][j];
                }
                for (m = 0; m < n; m++) {
                    a[m][j] = a[m][j] - min;
                }
            }
            sum = sum + a[1][1];
            for (p = 2; p < n; p++) {
                a[0][p - 1] = a[0][p];
                a[p - 1][0] = a[p][0];
            }
            for (j = 2; j < n; j++) {
                for (l = 2; l < n; l++) {
                    a[j - 1][l - 1] = a[j][l];
                }
            }
            n--;
        }
        cout << sum << endl;
        sum = 0;
        n = q;
    }
    return 0;
}

