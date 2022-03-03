int main () {
    int m, n, num, a [15];
    while (cin >> m) {
        if (m == -1)
            return 0;
        else {
            int n = 1;
            num = 0;
            a[0] = m;
            for (int i = 1;
            ; i++) {
                cin >> a[i];
                if (a[i] == 0)
                    break;
                if (a[i] != 0)
                    n = n + 1;
            }
            for (int j = 0;
            j <= n; j++) {
                for (int k = j + 1;
                k <= n; k++) {
                    if (a[j] == 2 * a[k] || a[k] == 2 * a[j])
                        num = num + 1;
                }
            }
            cout << num << endl;
        }
    }
}

