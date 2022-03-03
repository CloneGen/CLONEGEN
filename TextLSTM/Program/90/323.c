int M, N;

int f (int m, int n) {
    if (m == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n > m)
        return f (m, m);
    if (n <= m)
        return f (m - n, n) + f (m, n - 1);
}

int main () {
    int t;
    cin >> t;
    while (t > 0) {
        cin >> M >> N;
        cout << f (M, N) << endl;
        t--;
    }
    return 0;
}

