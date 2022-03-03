int ways (int, int);

int main () {
    int t, M, N, i, k [100];
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> M >> N;
        k[i] = ways (M, N);
    }
    for (i = 0; i < t; i++)
        cout << k[i] << endl;
    return 0;
}

int ways (int m, int n) {
    int k;
    if (n == 1 || m == 0 || m == 1)
        return 1;
    if (m >= n)
        k = ways (m, n - 1) + ways (m - n, n);
    else
        k = ways (m, n - 1);
    return k;
}

