int main () {
    int n, i, k, j, sum = 0, p = 0, t;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (j = 0; j < n; j++) {
        if (k != a[j]) {
            sum++;
        }
    }
    for (t = 0; t < n; t++) {
        if (k != a[t]) {
            if (p == sum - 1) {
                cout << a[t];
                p++;
            }
            else {
                cout << a[t] << " ";
                p++;
            }
        }
    }
    return 0;
}

