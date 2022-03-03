int n, k, a, i;

int f (int x, int a, int k, int n) {
    if (x == 1)
        return n * a + k;
    else
        return f (x - 1, a, k, n) * n / (n - 1) + k;
}

int main () {
    cin >> n >> k;
    for (a = 1;; a++) {
        for (i = 1; i < n; i++) {
            if (f (i, a, k, n) % (n - 1) != 0)
                break;
        }
        if (i == n) {
            cout << f (n, a, k, n);
            break;
        }
    }
    return 0;
}

