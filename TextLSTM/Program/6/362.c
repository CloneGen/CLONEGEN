int main () {
    int k, m, n, a [100], sum [100];
    cin >> k;
    for (int w = 0;
    w < 100; w++) {
        sum[w] = 0;
    }
    for (int i = 0;
    i < k; i++) {
        cin >> m >> n;
        for (int j = 0;
        j < m; j++) {
            for (int k = 0;
            k < n; k++) {
                cin >> a[k];
                if (j == 0 || j == m - 1 || k == 0 || k == n - 1)
                    sum[i] = sum[i] + a[k];
            }
        }
    }
    for (int p = 0;
    p < k; p++) {
        cout << sum[p] << endl;
    }
    return 0;
}

