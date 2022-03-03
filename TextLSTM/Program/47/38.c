int main () {
    int n, i, p;
    cin >> n;
    int a [n + 1];
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (n % 2 == 0) {
        for (i = 1; i <= n / 2; i++) {
            p = a[i];
            a[i] = a[n - i + 1];
            a[n - i + 1] = p;
        }
    }
    else {
        for (i = 1; i <= (n - 1) / 2; i++) {
            p = a[i];
            a[i] = a[n - i + 1];
            a[n - i + 1] = p;
        }
    }
    for (i = 1; i <= n; i++) {
        if (i == 1)
            cout << a[i];
        else
            cout << ' ' << a[i];
    }
    return 0;
}

