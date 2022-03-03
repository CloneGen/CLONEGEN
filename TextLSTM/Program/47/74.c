int main () {
    int n, i, a [150], b [150];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        b[i] = a[n - 1 - i];
    for (i = 0; i < n; i++)
        a[i] = b[i];
    cout << a[0];
    for (i = 1; i < n; i++)
        cout << " " << a[i];
    return 0;
}

