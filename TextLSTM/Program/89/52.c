int main () {
    int n, x, y, i;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++)
        a[i] = 0;
    while (true) {
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;
        a[y] = a[y] + x;
    }
    for (i = 0; i < n; i++)
        if (a[i] == n * (n - 1) / 2 - i) {
            cout << i;
            return 0;
        }
    cout << "NOT FIUND";
    return 0;
}

