int main () {
    int a [101], i, n, temp;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (n % 2 == 0) {
        for (i = n / 2 + 1; i <= n; i++) {
            temp = a[i];
            a[i] = a[n - i + 1];
            a[n - i + 1] = temp;
        }
    }
    else {
        for (i = (i + 1) / 2; i <= n; i++) {
            temp = a[i];
            a[i] = a[n + 1 - i];
            a[n + 1 - i] = temp;
        }
    }
    cout << a[1];
    for (i = 2; i <= n; i++) {
        cout << ' ' << a[i];
    }
}

