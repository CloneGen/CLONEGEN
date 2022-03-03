int main () {
    int k = 0;
    int m = 0, n = 0;
    int a [100] [100] = {0};
    int sum = 0;
    cin >> k;
    int (*p) [100] = NULL;
    p = a;
    for (int i = 0;
    i < k; i++) {
        cin >> m >> n;
        sum = 0;
        for (int j = 0;
        j < m; j++) {
            for (int l = 0;
            l < n; l++) {
                cin >> a[j][l];
            }
        }
        for (int a = 0;
        a < n; a++) {
            sum = sum + *(*(p + 0) + a);
        }
        for (int a = 1;
        a < m; a++) {
            sum = sum + *(*(p + a) + n - 1);
        }
        for (int a = n - 2;
        a >= 0; a--) {
            sum = sum + *(*(p + m - 1) + a);
        }
        for (int a = m - 2;
        a > 0; a--) {
            sum = sum + *(*(p + a) + 0);
        }
        cout << sum << endl;
    }
    return 0;
}

