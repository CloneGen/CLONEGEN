int main () {
    int i, n, a [102] = {0}, b [102] = {1}, j;
    cin >> n;
    if (n == 0)
        cout << "1" << endl;
    else {
        for (j = 1; j <= n; j++) {
            for (i = 0; i < 101; i++) {
                a[i] = 2 * b[i];
            }
            for (i = 0; i < 101; i++) {
                if (a[i] >= 10) {
                    a[i + 1] += a[i] / 10;
                    a[i] %= 10;
                }
            }
            while (a[i] == 0)
                i--;
            for (; i >= 0; i--) {
                b[i] = a[i];
                if (j == n)
                    cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}

