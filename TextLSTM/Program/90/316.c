int maxapple (int, int);

int main () {
    int t, i, m, n, k;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> m >> n;
        k = maxapple (m, n);
        cout << k << endl;
    }
    return 0;
}

int maxapple (int m, int n) {
    int k;
    if (m == 0)
        return 1;
    if (n == 1)
        return 1;
    if (m >= n) {
        k = maxapple (m - n, n) + maxapple (m, n - 1);
        return k;
    }
    if (m < n) {
        k = maxapple (m, n - 1);
        return k;
    }
}

