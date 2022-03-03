int apple (int m, int n) {
    if (n == 1 || m == 0)
        return 1;
    else if (n > m)
        return apple (m, m);
    return (apple (m - n, n) + apple (m, n - 1));
}

int main () {
    int t, m, n, i, k;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> m >> n;
        k = apple (m, n);
        cout << k << endl;
    }
    return 0;
}

