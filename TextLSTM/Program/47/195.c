int main () {
    int a [200];
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = n - 1; i >= 0; i--) {
        a[i + n] = a[i];
    }
    for (i = n + n - 1; i >= n; i--) {
        a[n + n - 1 - i] = a[i];
    }
    for (i = 0; i < n; i++) {
        if (i != n - 1)
            cout << a[i] << " ";
        else
            cout << a[i];
    }
    return 0;
}

