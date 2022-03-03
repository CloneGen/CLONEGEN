int main () {
    int n, i, k, c;
    cin >> n;
    long int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = n, c = 0; i > 0; i--) {
        if (a[i - 1] == k) {
            for (i = i - 1; i < n; i++) {
                a[i] = a[i + 1];
            }
            a[i] = 0;
            c++;
        }
    }
    n = n - c;
    for (i = 0; i < n - 1; i++) {
        cout << a[i] << ' ';
    }
    cout << a[i];
    return 0;
}

