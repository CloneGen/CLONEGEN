int main () {
    int a [120], b [120], i, n, m;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    int *p1 = &a[1];
    for (i = 1; i <= n - m; i++, p1++)
        b[m + i] = *p1;
    for (i = 1; i <= m; i++)
        b[i] = a[n - m + i];
    int *p = &b[1];
    for (i = 1; i < n; i++, p++)
        cout << *p << " ";
    cout << *p;
    return 0;
}

