int main () {
    int n, i, j, m;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0, j = n - 1; i <= j; i++, j--) {
        m = a[i];
        a[i] = a[j];
        a[j] = m;
    }
    cout << a[0];
    for (i = 1; i < n; i++)
        cout << " " << a[i];
    return 0;
}

