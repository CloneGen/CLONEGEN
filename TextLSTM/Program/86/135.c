int main () {
    int n, m, a [1000] [15], b [1000], c [1000], t [1000] [15], i, k;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        b[i] = m;
        for (k = 0; k < m; k++) {
            cin >> a[i][k];
            if (a[i][k] <= 62 - 3 * (k + 1)) {
                c[i] = a[i][k];
                b[i] = k + 1;
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (c[i] >= 62 - 3 * b[i])
            t[i][k] = c[i];
        else
            t[i][k] = 60 - 3 * b[i];
        cout << t[i][k] << endl;
    }
    return 0;
}

