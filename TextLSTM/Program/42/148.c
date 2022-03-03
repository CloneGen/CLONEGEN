int main () {
    int n, m;
    cin >> n;
    int a [n];
    for (int i = 0;
    i < n; i++) {
        cin >> m;
        a[i] = m;
    }
    int k, j = 1;
    cin >> k;
    for (int ii = 0;
    ii < n; ii++) {
        if (a[ii] != k && j == 1) {
            cout << a[ii];
            j += 1;
        }
        else if (a[ii] != k && j != 1)
            cout << ' ' << a[ii];
    }
    return 0;
}

