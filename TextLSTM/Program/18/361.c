int main () {
    int n, t, i, j, k, iTemp;
    cin >> n;
    int a [n] [n] [n], iSum [n];
    memset (iSum, 0, sizeof (iSum));
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= n - 1; j++) {
            for (k = 0; k <= n - 1; k++) {
                cin >> a[i][j][k];
            }
        }
    }
    for (i = 0; i <= n - 1; i++) {
        for (t = 1; t <= n - 1; t++) {
            for (j = 0; j <= n - 1; j++) {
                if (a[i][j][0] < 0) {
                    continue;
                }
                else {
                    iTemp = a[i][j][0];
                }
                for (k = 0; k <= n - 1; k++) {
                    if ((a[i][j][k] < iTemp) && (a[i][j][k] >= 0)) {
                        iTemp = a[i][j][k];
                    }
                }
                for (k = 0; k <= n - 1; k++) {
                    a[i][j][k] = a[i][j][k] - iTemp;
                }
            }
            for (k = 0; k <= n - 1; k++) {
                if (a[i][0][k] < 0) {
                    continue;
                }
                else {
                    iTemp = a[i][0][k];
                }
                for (j = 0; j <= n - 1; j++) {
                    if ((a[i][j][k] < iTemp) && (a[i][j][k] >= 0)) {
                        iTemp = a[i][j][k];
                    }
                }
                for (j = 0; j <= n - 1; j++) {
                    a[i][j][k] = a[i][j][k] - iTemp;
                }
            }
            iSum[i] = iSum[i] + a[i][t][t];
            for (k = 0; k <= n - 1; k++) {
                a[i][t][k] = -1;
            }
            for (j = 0; j <= n - 1; j++) {
                a[i][j][t] = -1;
            }
        }
    }
    cout << iSum[0];
    for (i = 1; i <= n - 1; i++) {
        cout << endl << iSum[i];
    }
    return 0;
}

