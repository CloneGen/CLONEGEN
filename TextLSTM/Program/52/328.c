int main () {
    int n, m;
    int a [100];
    cin >> n >> m;
    int i = 0, j = 0, k = (n - 2), last;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (j = 0; j < m; j++) {
        last = a[n - 1];
        for (k = (n - 1); k >= 1; k--) {
            a[k] = a[k - 1];
        }
        a[0] = last;
    }
    for (i = 0; i < n; i++) {
        if (i < (n - 1))
            cout << a[i] << ' ';
        else
            cout << a[i];
    }
    cout << endl;
}

