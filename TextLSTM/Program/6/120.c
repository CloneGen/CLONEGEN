int main () {
    int x, i, j, k, s = 0;
    int m, n, a [100] [100];
    cin >> x;
    for (i = 1; i <= x; i++) {
        cin >> m >> n;
        for (j = 0; j <= m - 1; j++) {
            for (k = 0; k <= n - 1; k++) {
                cin >> a[j][k];
                if (j == 0 || j == m - 1 || (k == 0 && j != 0 && j != m - 1) || (k == n - 1 && j != 0 && j != m - 1))
                    s = s + a[j][k];
            }
        }
        cout << s << endl;
        s = 0;
    }
    return 0;
}

