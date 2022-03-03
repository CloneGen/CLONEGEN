int main () {
    int n, m, i, j, t, a [100];
    cin >> n >> m;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++) {
        t = a[i];
        a[i] = a[n - m + i];
        for (j = n - m + i; j > i; j--) {
            if (j == i + 1)
                a[j] = t;
            else
                a[j] = a[j - 1];
        }
    }
    for (i = 0; i < n; i++) {
        if (i == 0)
            cout << a[i];
        else
            cout << ' ' << a[i];
    }
    return 0;
}

