int f (int n, int k, int m, int t) {
    if (t == 1) {
        if (((m - k) % n == 0) && (m - k) >= n)
            return 0;
        else
            return 1;
    }
    if (((m - k) % n == 0) && (m - k) >= n)
        return f (n, k, m - k - (m - k) / n, t - 1);
    else
        return 1;
}

int main () {
    int n, k, m = 1;
    cin >> n >> k;
    while (f (n, k, m, n))
        m++;
    cout << m;
    return 0;
}

