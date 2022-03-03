int main (int argc, const  char *argv []) {
    int m, n, i, j, k;
    int a [100];
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (i = n - m + 1; i <= n; i++)
        *(a + i + m) = *(a + i);
    for (i = n - m; i >= 1; i--)
        *(a + i + m) = *(a + i);
    for (i = 1; i <= m; i++)
        *(a + i) = *(a + i + n);
    for (i = 1; i <= n - 1; i++)
        cout << a[i] << ' ';
    cout << a[n];
    return 0;
}

