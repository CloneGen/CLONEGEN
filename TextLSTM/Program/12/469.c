int main () {
    int a [15], t, i, j, k, m, n;
    for (i = 1;; i++) {
        for (j = 0; j <= 14; j++)
            a[j] = 0;
        for (j = 0;; j++) {
            cin >> t;
            if (t == 0)
                break;
            else {
                a[j] = t;
            }
        }
        m = 1;
        if (a[0] != -1)
            m = 0;
        for (j = 1; j < 15; j++) {
            if (a[j] != 0)
                m = 0;
        }
        if (m == 1) {
            cout << "0" << endl;
            break;
        }
        n = 0;
        for (j = 0; j <= 14; j++)
            for (k = j + 1; k <= 14; k++) {
                if (a[j] != 0 && a[k] != 0 && (a[j] == 2 * a[k] || a[k] == 2 * a[j]))
                    n = n + 1;
            }
        cout << n << endl;
    }
    return 0;
}

