int main () {
    int n, i, j, k, s = 0;
    cin >> n;
    if (n < 0 || n > 100000)
        return 0;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] == k) {
            s = s + 1;
            for (j = i; j < n - s; j++)
                a[j] = a[j + 1];
        }
    }
    for (i = 0; i < n - s; i++) {
        if (i != n - s - 1)
            cout << a[i] << " ";
        else
            cout << a[i];
    }
    return 0;
}

