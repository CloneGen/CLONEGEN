int main () {
    int n, k, m, i;
    cin >> n >> k;
    int a [n];
    a[0] = n + k;
    do {
        for (i = 1; i < n; i++) {
            a[i] = ((a[i - 1] - k) / n) * (n - 1);
            if (((a[i] % n) != k) || (a[i] == k))
                break;
        }
        a[0] += n;
        m = a[0];
    }
    while (i < n);
    m -= n;
    cout << m;
}

