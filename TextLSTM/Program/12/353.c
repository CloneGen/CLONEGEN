int main () {
    int n, a [16], i, t, m, j, k, sum;
    while (cin >> t) {
        if (t != -1) {
            a[1] = t;
            i = 1;
            while (cin >> m) {
                if (m != 0) {
                    i = i + 1;
                    a[i] = m;
                }
                else
                    break;
            }
            sum = 0;
            for (j = 1; j <= i; j++)
                for (k = 1; k <= i; k++) {
                    if (a[k] == 2 * a[j] || a[k] == 0.5 * a[j])
                        sum = sum + 1;
                }
            cout << sum / 2 << endl;
        }
        else {
            cout << endl;
            break;
        }
    }
    return 0;
}

