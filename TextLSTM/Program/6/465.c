int main () {
    int i, j, k, l, m, n, x, s;
    cin >> k;
    for (i = 1; i <= k; i++) {
        cin >> m >> n;
        for (j = 1, s = 0, m--; j <= n; j++) {
            cin >> x;
            s += x;
        }
        for (j = 2; j <= m; j++)
            for (l = 1; l <= n; l++) {
                cin >> x;
                if ((l == 1) || (l == n))
                    s += x;
            }
        for (j = 1; j <= n; j++) {
            cin >> x;
            s += x;
        }
        cout << s << endl;
    }
    return 0;
}

