int main () {
    int k, m, n, a [100] [100], i, j, s, t, p, q;
    cin >> k;
    for (t = 1; t <= k; t++) {
        cin >> m >> n;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        s = 0;
        for (p = 0; p < m; p++)
            for (q = 0; q < n; q++)
                if (p == 0 || q == 0 || p == m - 1 || q == n - 1)
                    s = s + a[p][q];
        cout << s << endl;
    }
    return 0;
}

