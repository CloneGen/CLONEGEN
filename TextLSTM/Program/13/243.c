int main () {
    int n, t, i, j, m;
    cin >> n;
    int a [20000] = {0};
    cin >> t;
    cout << t;
    m = 1;
    a[0] = t;
    for (i = 2; i <= n; i++) {
        cin >> t;
        for (j = 0; j < m; j++) {
            if (a[j] == t)
                break;
        }
        if (j >= m) {
            cout << ' ' << t;
            a[m] = t;
            m++;
        }
    }
    return 0;
}

