int count = 0;

int f (int m, int n) {
    int a = 0;
    int b = 0;
    if (m < n) {
        n = m;
    }
    if (m >= n) {
        if (m > 0)
            a = f (m - n, n);
        if (n > 1)
            b = f (m, n - 1);
    }
    if (n == 1) {
        return 1;
    }
    if (m == 0) {
        return 1;
    }
    return (a + b);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        cout << f (m, n) << endl;
    }
    return 0;
}

