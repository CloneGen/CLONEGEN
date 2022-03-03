int f (int n) {
    int m = 1;
    for (int i = 0;
    i < n; i++)
        m = m * n;
    return m;
}

int main () {
    int n, k;
    cin >> n >> k;
    if (n == 2)
        cout << (3 + 4 * k);
    else
        cout << f (n) - k * (n - 1);
    return 0;
}

