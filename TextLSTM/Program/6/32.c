int main () {
    int a [100] [100], k, n, m;
    cin >> k;
    for (int i = 0;
    i < k; i++) {
        int sum = 0;
        cin >> m >> n;
        for (int j = 0;
        j < m; j++)
            for (int k = 0;
            k < n; k++)
                cin >> a[j][k];
        int *p = a[0];
        for (; p < a[0] + n; p++)
            sum += *p;
        if (m == 1) {
            cout << sum << endl;
            continue;
        }
        p = a[m - 1];
        for (; p < a[m - 1] + n; p++)
            sum += *p;
        int (*q) [100] = a + 1;
        for (; q <= a + m - 2; q++)
            sum += **q + *((*q) + n - 1);
        if (n == 1) {
            cout << (sum - a[0][0] - a[m - 1][0]) / 2 + a[0][0] + a[m - 1][0];
            continue;
        }
        cout << sum << endl;
    }
    return 0;
}

