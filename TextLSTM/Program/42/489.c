int main () {
    int a [100001] = {0}, i, j, k, n, p, q;
    cin >> n;
    q = n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (j = 1, i = 1; i <= n; i++, j++) {
        if (a[j] == k) {
            for (p = j; p <= n; p++)
                a[p] = a[p + 1];
            j--;
            q--;
        }
    }
    for (i = 1; i <= q; i++) {
        if (i != q)
            cout << a[i] << " ";
        else
            cout << a[i];
    }
    return 0;
}

