int main () {
    int a [16], i, j, k, m, n, count;
    for (i = 0;; i++) {
        cin >> m;
        if (m == -1) {
            break;
        }
        else {
            count = 0;
            a[0] = m;
            for (j = 1; j < 16; j++) {
                cin >> a[j];
                if (a[j] == 0) {
                    break;
                }
            }
            n = j;
            for (j = 0; j < n; j++) {
                for (k = j + 1; k < n; k++) {
                    if (a[j] == 2 * a[k] || a[k] == 2 * a[j]) {
                        count++;
                    }
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}

