int main () {
    int a [100000];
    int i, j, n, k, p, q;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0, p = 0; p < n - 1; p++) {
        if (a[i] == k)
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
        else
            i++;
    }
    if (i == 0) {
        if (a[i] != k)
            cout << a[i];
    }
    if (i == 1) {
        cout << a[0];
        if (a[i] != k)
            cout << " " << a[i];
    }
    if (i > 1) {
        cout << a[0];
        for (q = 1; q < i; q++)
            cout << " " << a[q];
        if (a[i] != k)
            cout << " " << a[i];
    }
    return 0;
}

