int main () {
    int a [100], n, i, j, k, t;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (j = n - 1; j >= 0; j--) {
        for (k = 0; k < j; k++) {
            {
                t = a[n - k - 1];
                a[n - k - 1] = a[n - k - 2];
                a[n - k - 2] = t;
            }
        }
    }
    for (i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1)
            cout << " ";
    }
    return 0;
}

