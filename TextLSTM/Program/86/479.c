int main () {
    int n, j, m, i, a [200], t [200] = {0};
    cin >> n;
    for (j = 0; j < n; j++) {
        cin >> m;
        memset (t, 0, sizeof (t));
        if (m == 0)
            cout << 60 << endl;
        for (i = 0; i < m; i++) {
            cin >> a[i];
            t[i] = a[i] + (i + 1) * 3 + 1;
        }
        for (i = 0; i < m; i++) {
            if ((t[i] <= 60 && t[i + 1] > 60) || (t[i] <= 60 && t[i + 1] == 0)) {
                if (t[i + 1] == 61 || t[i + 1] == 62 || t[i + 1] == 63) {
                    cout << a[i + 1] << endl;
                    break;
                }
                else
                    cout << 60 - 3 * (i + 1) << endl;
            }
        }
    }
    return 0;
}

