int main () {
    int i, j, k, m, n;
    int a [100000];
    cin >> n;
    m = n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    if (a[n - 1] == k) {
        a[n - 1] = k + 1;
        m = m - 1;
    }
    for (i = 0; i < n - 1; i++) {
        while (a[i] == k) {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            m = m - 1;
        }
    }
    for (i = 0; i < m; i++) {
        cout << a[i];
        if (i == m - 1)
            cout << endl;
        else
            cout << " ";
    }
    return 0;
}

