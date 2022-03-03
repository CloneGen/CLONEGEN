int main () {
    int a [9999] = {1}, i = 0, n = 0, k = 0;
    cin >> n >> k;
    a[n] = k;
    do {
        a[n] = a[n] + n;
        for (i = n - 1; i >= 1; i--) {
            if (a[i + 1] % (n - 1) != 0)
                break;
            else
                a[i] = a[i + 1] * n / (n - 1) + k;
        }
    }
    while (i >= 1);
    cout << a[1];
    return 0;
}

