int min (int a [], int nx) {
    int x, min;
    min = a[0];
    for (x = 0; x <= nx - 1; x++) {
        if (a[x] <= min) {
            min = a[x];
        }
    }
    return min;
}

int main () {
    int temp, nx, y, sum, i, j, k, n, a [100] [100], b [100], m;
    cin >> n;
    for (i = 1; i <= n; i++) {
        sum = 0;
        nx = n;
        for (j = 0; j <= n - 1; j++) {
            for (k = 0; k <= n - 1; k++) {
                cin >> a[j][k];
            }
        }
        for (y = 1; y <= n - 1; y++) {
            for (j = 0; j <= n - 1; j++) {
                temp = min (a[j], nx);
                for (k = 0; k <= n - 1; k++) {
                    a[j][k] = a[j][k] - temp;
                }
            }
            for (k = 0; k <= n - 1; k++) {
                for (m = 0; m <= n - 1; m++) {
                    b[m] = a[m][k];
                }
                temp = min (b, nx);
                for (j = 0; j <= n - 1; j++) {
                    a[j][k] = a[j][k] - temp;
                }
            }
            sum = sum + a[1][1];
            for (j = 1; j <= n - 2; j++) {
                for (k = 0; k <= n - 1; k++) {
                    a[j][k] = a[j + 1][k];
                }
            }
            for (k = 1; k <= n - 2; k++) {
                for (j = 0; j <= n - 1; j++) {
                    a[j][k] = a[j][k + 1];
                }
            }
            nx--;
        }
        cout << sum << endl;
    }
    return 0;
}

