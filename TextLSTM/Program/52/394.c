int main () {
    int a [100] = {0};
    int *p = a;
    int n, m, t;
    cin >> n >> m;
    for (p = a; p <= &a[n - 1]; p++)
        cin >> *p;
    for (; m > 0; m--) {
        t = a[n - 1];
        for (p = &a[n - 2]; p >= a; p--)
            *(p + 1) = *p;
        a[0] = t;
    }
    cout << a[0];
    for (p = &a[1]; p <= &a[n - 1]; p++)
        cout << " " << *p;
    return 0;
}

