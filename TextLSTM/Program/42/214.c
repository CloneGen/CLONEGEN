int main () {
    int a [100010] = {0}, n, k, i, s, del = 0, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 1; i <= n; i++) {
        if (a[i] == k) {
            for (j = i; j <= n; j++)
                a[j] = a[j + 1];
            i = i - 1;
            del++;
        }
    }
    for (i = 1; i < n - del; i++)
        cout << a[i] << ' ';
    cout << a[i];
}

