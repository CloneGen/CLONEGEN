int main () {
    int n, k, i = 1, j;
    cin >> n >> k;
    int f [n + 1];
    while (i > 0) {
        f[0] = (n - 1) * i;
        for (j = 1; j < n + 1; j++) {
            if (f[j - 1] % (n - 1) != 0)
                break;
            f[j] = f[j - 1] * n / (n - 1) + k;
        }
        if (j == n + 1)
            break;
        i = i + 1;
    }
    cout << f[n] << endl;
    return 0;
}

