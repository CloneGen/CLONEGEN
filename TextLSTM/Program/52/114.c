int main () {
    int n, m, i, a [200] = {0};
    cin >> n >> m;
    for (i = 0; i < n; i++)
        cin >> a[i];
    int *p = a + n - 1, *q = a + n - m;
    for (i = 0; i < n - m; i++) {
        p += 1;
        *p = a[i];
    }
    for (i = 0; i < n - 1; i++) {
        cout << *q << " ";
        q += 1;
    }
    cout << *q << endl;
    return 0;
}

