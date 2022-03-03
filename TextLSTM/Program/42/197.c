int main () {
    int a [100000], n, k, c = 0, i, temp;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> k;
    for (; c < n; ++c) {
        if (a[c] == k) {
            for (i = c; i < n - 1; ++i) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            --n;
            c = -1;
        }
    }
    cout << a[0];
    for (c = 1; c < n; ++c)
        cout << " " << a[c];
    return 0;
}

