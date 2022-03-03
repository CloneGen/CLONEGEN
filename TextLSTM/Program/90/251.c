int dis (int m, int n) {
    if (n == 1 || m == 0)
        return 1;
    if (m < n) {
        return dis (m, m);
    }
    if (n <= m) {
        return dis (m, n - 1) + dis (m - n, n);
    }
}

int main () {
    int t, m, n, i, sum;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> m >> n;
        sum = dis (m, n);
        cout << sum << endl;
    }
    return 0;
}

