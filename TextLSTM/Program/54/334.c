int main () {
    int n, k;
    cin >> n >> k;
    int i, f [n + 2];
    f[n + 1] = 1;
    while (1) {
        f[n] = n * f[n + 1] + k;
        for (i = n - 1; i > 0; i--) {
            if (f[i + 1] % (n - 1) != 0) {
                break;
            }
            f[i] = (f[i + 1] * n) / (n - 1) + k;
        }
        if (i == 0)
            break;
        else
            f[n + 1]++;
    }
    cout << f[1];
    return 0;
}

