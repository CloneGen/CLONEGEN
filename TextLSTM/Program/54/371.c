int main () {
    int n, k, i;
    cin >> n >> k;
    int a [n + 1];
    for (a[1] = n + k;; a[1]++) {
        if (a[1] % n == 0)
            continue;
        if (a[1] % n != k)
            continue;
        for (i = 2; i <= n; i++) {
            if (a[i - 1] % n == 0)
                break;
            if (a[i - 1] % (n - 1) != 0)
                break;
            a[i] = n * a[i - 1] / (n - 1) + k;
        }
        if (i == n + 1)
            break;
    }
    cout << a[n];
    return 0;
}

