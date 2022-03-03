int main () {
    int tmp, t, n, a [100];
    cin >> n;
    t = n / 2 - 1;
    for (int i = 0;
    i <= n - 1; ++i)
        cin >> a[i];
    for (int i = 0;
    i <= t; ++i) {
        tmp = a[n - 1 - i];
        a[n - 1 - i] = a[i];
        a[i] = tmp;
    }
    cout << a[0];
    for (int i = 1;
    i <= n - 1; ++i)
        cout << ' ' << a[i];
    return 0;
}

