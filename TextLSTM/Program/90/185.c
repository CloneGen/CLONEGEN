int c (int m, int n) {
    int s1, s2, k = m;
    s1 = s2 = 1;
    while (k--) {
        s1 *= n--;
        s2 *= m--;
    }
    return s1 / s2;
}

int f (int m, int n) {
    if (n == 1)
        return 1;
    if (m < n) {
        return f (m, n - 1);
    }
    return f (m, n - 1) + f (m - n, n);
}

int main () {
    int t;
    cin >> t;
    int m, n;
    while (t--) {
        cin >> m >> n;
        cout << f (m, n) << endl;
    }
    return 0;
}

