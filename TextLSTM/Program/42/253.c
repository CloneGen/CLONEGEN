int main () {
    int n, a [100000], k, i, r, t = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = n - 1; i >= 0; i--)
        if (a[i] == k) {
            t++;
            for (r = i; r < n - 1; ++r)
                a[r] = a[r + 1];
        }
    for (i = 0; i < n - t - 1; ++i)
        cout << a[i] << ' ';
    cout << a[n - t - 1];
    return 0;
}

