int main () {
    int a [100] = {0}, n, k, i;
    cin >> n >> k;
    if (n > 2) {
        a[1] = n + k;
        while (true) {
            for (i = 2; i <= n; i++) {
                a[i] = (a[i - 1] - k) / n * (n - 1);
                if ((a[i] % n) != k)
                    break;
            }
            if (i == (n + 1))
                break;
            else
                a[1] = a[1] + n;
        }
        cout << a[1] << endl;
    }
    else {
        a[1] = 7;
        cout << a[1] << endl;
    }
    return 0;
}

