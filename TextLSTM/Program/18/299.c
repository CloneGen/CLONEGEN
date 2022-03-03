int main () {
    int a [101] [101] = {0}, n, i, j, k, p, sum;
    cin >> n;
    for (k = 1; k <= n; k++) {
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                cin >> a[i][j];
        sum = 0;
        for (p = n; p >= 1; p--) {
            for (i = 0; i <= p; i++) {
                a[0][i] = 99999;
                a[i][0] = 99999;
            }
            for (i = 1; i <= p; i++) {
                for (j = 1; j <= p; j++) {
                    if (a[i][0] > a[i][j])
                        a[i][0] = a[i][j];
                }
            }
            for (i = 1; i <= p; i++)
                for (j = 1; j <= p; j++)
                    a[i][j] -= a[i][0];
            for (i = 1; i <= p; i++) {
                for (j = 1; j <= p; j++) {
                    if (a[0][j] > a[i][j])
                        a[0][j] = a[i][j];
                }
            }
            for (i = 1; i <= p; i++)
                for (j = 1; j <= p; j++)
                    a[i][j] -= a[0][j];
            sum += a[2][2];
            for (i = 1; i <= p; i++) {
                a[2][i] = 0;
                a[i][2] = 0;
            }
            for (i = 1; i <= p; i++)
                for (j = 3; j <= p; j++)
                    a[i][j - 1] = a[i][j];
            for (i = 3; i <= p; i++)
                for (j = 1; j <= p; j++)
                    a[i - 1][j] = a[i][j];
        }
        cout << sum << endl;
    }
    return 0;
}

