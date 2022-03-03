int main () {
    int a [110], i, m, n, *p;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (p = a + n - 1; p >= a; p--)
        *(p + m) = *p;
    for (p = a; p < (a + m); p++)
        *p = *(p + n);
    p = a;
    cout << *p;
    for (i = 1; i < n; i++)
        cout << ' ' << *(p + i);
    return 0;
}

