int main () {
    int n, a [100] [60], i, m [100], j, s, t;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m[i];
        if (m[i] != 0) {
            for (j = 0; j < m[i]; j++) {
                cin >> a[i][j];
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (m[i] == 0) {
            cout << 60 << endl;
        }
        if (m[i] > 0) {
            j = m[i] - 1;
            s = a[i][j] + m[i] * 3;
            if (s > 60) {
                s = 0, j = 0;
                while (s <= 60) {
                    s = 3 * (j + 1) + a[i][j];
                    j++;
                }
                if (s - 3 > 60)
                    t = 60 - (j - 1) * 3;
                else
                    t = 60 - (j - 1) * 3 - (3 - (s - 60));
            }
            else {
                t = 60 - m[i] * 3;
            }
            cout << t << endl;
        }
    }
    return 0;
}

