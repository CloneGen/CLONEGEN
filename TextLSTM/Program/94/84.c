int main () {
    int n;
    cin >> n;
    int a [n];
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    int b [n];
    int m = 0;
    for (int i = 0;
    i < n; i++) {
        if (a[i] % 2 == 1) {
            b[m] = a[i];
            m++;
        }
    }
    sort (b, b + m);
    cout << b[0];
    for (int i = 1;
    i < m; i++)
        cout << "," << b[i];
    return 0;
}

