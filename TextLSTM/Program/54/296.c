int main () {
    int n, k, a [1000], i = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        a[i] = k;
    }
    do {
        a[n] = a[n] + n;
        for (i = n; i >= 2; i--) {
            a[i - 1] = a[i] * n / (n - 1) + k;
            if (a[i - 1] % n != k)
                break;
            else
                continue;
        }
    }
    while (i >= 2);
    cout << a[1] << endl;
    return 0;
}

