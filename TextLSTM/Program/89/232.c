int main () {
    int a [10000] = {0}, b [10000] = {0}, x, y, n;
    cin >> n;
    while (cin >> x >> y) {
        if (x == y)
            break;
        a[x] = 1;
        b[y]++;
    }
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0 && b[i] == n - 1) {
            cout << i;
            break;
        }
    if (i == n)
        cout << "NOT FOUND";
    return 0;
}

