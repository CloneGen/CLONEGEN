int main () {
    int m, n, i, j, k;
    cin >> n >> m;
    int a [2 * n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (j = n - m; j < n; j++) {
        a[j + m] = a[j];
    }
    for (k = 0; k < n - m; k++) {
        a[k + m + n] = a[k];
    }
    for (j = n; j < 2 * n - 1; j++) {
        cout << a[j] << " ";
    }
    cout << a[2 * n - 1];
    return 0;
}

