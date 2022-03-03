int main () {
    int n, i, j, k;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            n = n - 1;
            for (j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
            i = i - 1;
        }
    }
    for (i = 0; i < n - 1; i++)
        cout << a[i] << ' ';
    if (a[i] != k)
        cout << a[i];
    return 0;
}

