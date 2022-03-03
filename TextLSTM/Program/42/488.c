int main () {
    int n, i, k, j = 0, x;
    cin >> n;
    int a [n];
    for (i = 0; i <= n - 1; i++) {
        cin >> a[i];
    }
    cin >> k;
    i = 0;
    while (i <= n - 1 - j) {
        if (a[i] == k) {
            j = j + 1;
            for (x = i; x <= n - 1 - j; x++)
                a[x] = a[x + 1];
        }
        else {
            i = i + 1;
        }
    }
    for (i = 0; i <= n - j - 1; i++) {
        if (i == 0)
            cout << a[i];
        else
            cout << " " << a[i];
    }
    return 0;
}

