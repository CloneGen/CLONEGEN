int main () {
    int n;
    cin >> n;
    int i, j, k, m;
    int t = 0;
    int a [100] [100];
    int s = 0;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        for (m = 1; m <= n - 1; m++) {
            for (i = 0; i < n - m + 1; i++) {
                t = a[i][0];
                for (j = 1; j < n - m + 1; j++) {
                    if (a[i][j] < t)
                        t = a[i][j];
                }
                for (j = 0; j < n - m + 1; j++)
                    a[i][j] = a[i][j] - t;
            }
            for (j = 0; j < n - m + 1; j++) {
                t = a[0][j];
                for (i = 1; i < n - m + 1; i++) {
                    if (a[i][j] < t)
                        t = a[i][j];
                }
                for (i = 0; i < n - m + 1; i++)
                    a[i][j] = a[i][j] - t;
            }
            s = s + a[1][1];
            for (i = 0; i < n; i++) {
                for (j = 1; j < n - m; j++)
                    a[i][j] = a[i][j + 1];
            }
            for (j = 0; j < n - m; j++) {
                for (i = 1; i < n - m; i++)
                    a[i][j] = a[i + 1][j];
            }
        }
        cout << s << endl;
        s = 0;
    }
    return 0;
}

