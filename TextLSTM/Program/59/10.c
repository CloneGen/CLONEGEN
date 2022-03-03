int main () {
    int n;
    cin >> n;
    char a [n] [n];
    int t1, t2, t3;
    for (t1 = 0; t1 < n; ++t1)
        for (t2 = 0; t2 < n; ++t2)
            cin >> a[t1][t2];
    int m;
    cin >> m;
    for (t1 = 1; t1 < m; ++t1) {
        for (t2 = 0; t2 < n; ++t2)
            for (t3 = 0; t3 < n; ++t3) {
                if (a[t2][t3] == '@') {
                    if (t2 != 0 && t2 != n - 1) {
                        if (a[t2 - 1][t3] == '.')
                            a[t2 - 1][t3] = 'T';
                        if (a[t2 + 1][t3] == '.')
                            a[t2 + 1][t3] = 'T';
                    }
                    if (t2 == 0)
                        if (a[1][t3] == '.')
                            a[1][t3] = 'T';
                    if (t2 == n - 1)
                        if (a[n - 2][t3] == '.')
                            a[n - 2][t3] = 'T';
                    if (t3 != 0 && t3 != n - 1) {
                        if (a[t2][t3 - 1] == '.')
                            a[t2][t3 - 1] = 'T';
                        if (a[t2][t3 + 1] == '.')
                            a[t2][t3 + 1] = 'T';
                    }
                    if (t3 == 0)
                        if (a[t2][1] == '.')
                            a[t2][1] = 'T';
                    if (t3 == n - 1)
                        if (a[t2][n - 2] == '.')
                            a[t2][n - 2] = 'T';
                }
            }
        for (t2 = 0; t2 < n; ++t2)
            for (t3 = 0; t3 < n; ++t3)
                if (a[t2][t3] == 'T')
                    a[t2][t3] = '@';
    }
    int total = 0;
    for (t2 = 0; t2 < n; ++t2)
        for (t3 = 0; t3 < n; ++t3)
            if (a[t2][t3] == '@')
                ++total;
    cout << total;
    return 0;
}

