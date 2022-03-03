int main () {
    int k, n, m, i, t = 0;
    cin >> n >> k;
    int x [n + 1];
    for (x[n] = 1;; x[n]++) {
        t = 0;
        for (i = n - 1; i >= 0; i--) {
            if ((x[i + 1] * n) % (n - 1) != 0)
                break;
            else {
                x[i] = (x[i + 1] * n) / (n - 1) + k;
                t = t + 1;
            }
        }
        if (t == n)
            break;
    }
    m = x[0];
    cout << m;
    return 0;
}

