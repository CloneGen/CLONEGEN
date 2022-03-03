int main () {
    int n, i, num, k;
    cin >> n;
    k = 0;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> num;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] == num) {
            for (; i < n - 1 - k; i++) {
                a[i] = a[i + 1];
            }
            k = k + 1;
        }
    }
    cout << a[0];
    for (i = 1; i <= n - 1 - k; i++)
        cout << ' ' << a[i];
    return 0;
}

