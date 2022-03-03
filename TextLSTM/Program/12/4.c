int main () {
    int i = 0, j, k, n, t = 0;
    int a [16];
    while (cin >> n) {
        if (n != 0) {
            a[i] = n;
            i++;
        }
        else {
            for (j = 0; j < i - 1; j++) {
                for (k = j + 1; k <= i - 1; k++) {
                    if (a[k] == 2 * a[j] || a[j] == 2 * a[k])
                        t++;
                }
            }
            cout << t << endl;
            t = 0;
            i = 0;
        }
    }
    return 0;
}

