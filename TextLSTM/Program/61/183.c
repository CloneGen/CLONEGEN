int main () {
    int n = 0, i = 0, j = 0, m = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        int a [m];
        a[0] = 1;
        a[1] = 1;
        for (j = 2; j <= m; j++) {
            a[j] = a[j - 1] + a[j - 2];
        }
        cout << a[m - 1] << endl;
    }
    return 0;
}

