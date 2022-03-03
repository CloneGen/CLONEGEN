int main () {
    int n, k;
    cin >> n >> k;
    long int f [100] = {0};
    int i = n;
    if (n - 1 == k)
        f[n] = n - 1;
    else
        f[n] = n - 1 - k;
    for (i = n; i > 1; i--) {
        f[i - 1] = f[i] + (f[i] + k) / (n - 1);
        if (i - 1 == 1)
            break;
        if ((f[i - 1] + k) % (n - 1) != 0) {
            i = n + 1;
            f[n] += n - 1;
        }
    }
    long int sum = 0;
    for (i = 1; i <= n; i++)
        sum += f[i];
    sum += k * n + f[n] * (n - 1);
    cout << sum << endl;
    return 0;
}

