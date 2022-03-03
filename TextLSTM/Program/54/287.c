int main () {
    int n, k;
    int i, j, z, a, c;
    cin >> n >> k;
    for (i = n - 1;; i = i + n - 1) {
        a = i;
        z = 1;
        for (j = 1; j <= n - 1; j++) {
            c = a * n / (n - 1) + k;
            if (c % (n - 1) == 0) {
                z++;
                a = c;
            }
            else
                break;
        }
        if (z == n) {
            a = a * n / (n - 1) + k;
            break;
        }
    }
    cout << a;
    return 0;
}

