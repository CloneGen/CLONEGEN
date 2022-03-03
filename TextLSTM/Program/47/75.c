int main () {
    int a [100], i, j, k, n, temp;
    cin >> n;
    for (k = 1; k <= n; k++) {
        cin >> a[k];
    }
    for (i = 1, j = n; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << a[1];
    for (k = 2; k <= n; k++) {
        cout << " " << a[k];
    }
    return 0;
}

