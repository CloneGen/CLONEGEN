int main () {
    int n, k, m, i;
    cin >> n >> k;
    int f [n + 1];
    for (m = 1;; m++) {
        f[1] = m;
        for (i = 2; i <= n + 1; i++)
            if ((f[i - 1] - k) % n != 0)
                break;
            else
                f[i] = f[i - 1] - k - (f[i - 1] - k) / n;
        if ((i == n + 2) && (f[n] >= n + k)) {
            cout << m << endl;
            break;
        }
        else
            continue;
    }
    return 0;
}

