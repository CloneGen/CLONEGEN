int main () {
    int n, k, t = 1, i;
    cin >> n >> k;
    int apple [n];
    while (1) {
        apple[0] = t * n + k;
        for (i = 1; i < n; i++) {
            if (apple[i - 1] % (n - 1) != 0) {
                t++;
                break;
            }
            apple[i] = apple[i - 1] * n / (n - 1) + k;
        }
        if (i == n) {
            cout << apple[n - 1];
            break;
        }
    }
    return 0;
}

