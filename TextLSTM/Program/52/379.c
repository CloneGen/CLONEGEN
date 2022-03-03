int main () {
    int n, m;
    cin >> n >> m;
    int ain [234];
    m++;
    int *p = ain, *q = ain;
    for (int i = 1;
    i <= n; i++, p++)
        cin >> *p;
    q = p;
    for (int i = 1;
    i <= m; ++i)
        --p;
    for (int i = 1;
    i <= m; ++i) {
        *q++ = *p++;
    }
    q = p;
    for (int i = 1;
    i <= m; ++i)
        --p;
    for (int i = 1;
    i <= n - m; ++i) {
        *--q = *--p;
    }
    q = &ain[n];
    for (int i = 1;
    i <= m; ++i)
        *p++ = *q++;
    cout << ain[1];
    for (int i = 2;
    i <= n; ++i)
        cout << ' ' << ain[i];
    return 0;
}

