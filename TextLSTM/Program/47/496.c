int main () {
    int n, i, j, k, p;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (j = 0; j <= n / 2 - 1; j++) {
        p = a[j];
        a[j] = a[n - 1 - j];
        a[n - 1 - j] = p;
    }
    for (k = 0; k < n; k++) {
        if (k == 0) {
            cout << a[k];
        }
        else {
            cout << ' ' << a[k];
        }
    }
    return 0;
}

