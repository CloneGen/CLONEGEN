int main () {
    int n, k, a [100005], i, j, m = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k)
            m = m + 1;
    }
    for (i = 0; i < n - m; i++) {
        if (a[i] == k) {
            for (j = i + 1; j < n; j++) {
                if (a[j] != k) {
                    a[i] = a[j];
                    i = i + 1;
                }
            }
            break;
        }
    }
    for (i = 0; i < n - m - 1; i++)
        cout << a[i] << " ";
    cout << a[n - m - 1];
    return 0;
}

