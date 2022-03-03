int main () {
    int n, i, k, m = 0;
    cin >> n;
    int a [n];
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 1; i <= n; i++) {
        if (a[i] == k) {
            for (int j = i;
            j <= n; j++)
                a[j] = a[j + 1];
            i = i - 1;
            m = m + 1;
        }
    }
    for (i = 1; i <= n - m - 1; i++)
        cout << a[i] << ' ';
    cout << a[n - m];
    return 0;
}

