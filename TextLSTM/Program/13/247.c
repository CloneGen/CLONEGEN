int main () {
    int n, i, j, k, s = 0;
    cin >> n;
    if (n < 1 || n > 20000)
        return 0;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 10 || a[i] >= 100)
            return 0;
    }
    for (j = 0; j < n - s; j++) {
        for (i = n - 1 - s; i > j; i--) {
            if (a[j] == a[i]) {
                s = s + 1;
                for (k = i; k < n - s; k++)
                    a[k] = a[k + 1];
            }
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

