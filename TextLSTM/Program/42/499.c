int main () {
    int n, i, k, j, a [100001], s, p, m;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> s;
    if (n > 1) {
        for (k = 1; k <= n - 1; k++) {
            if (a[k] == s) {
                for (j = k; j <= n - 1; j++) {
                    a[j] = a[j + 1];
                }
                n = n - 1;
                k = k - 1;
            }
        }
        for (p = 1; p <= n; p++) {
            if (p == n) {
                if (a[p] == s)
                    p = p - 1;
                break;
            }
        }
        if (p > 0)
            cout << a[1];
        if (p > 1) {
            for (m = 2; m <= p; m++)
                cout << " " << a[m];
        }
    }
    else if (a[1] != s)
        cout << a[1];
    return 0;
}

