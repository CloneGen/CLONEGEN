int main () {
    int a [20000], n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j] == a[i])
                a[j] = -1;
        }
    }
    cout << a[0];
    for (i = 1; i < n; i++)
        if (a[i] != -1)
            cout << " " << a[i];
    return 0;
}

