int main () {
    int n, m, sum = 0;
    int str [100] [100];
    cin >> n >> m;
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < m; j++)
            cin >> str[i][j];
    for (int k = 0;
    k < (n + 1) / 2; k++) {
        for (int k1 = k;
        k1 < m - k; k1++) {
            cout << str[k][k1] << endl;
            sum++;
            if (sum == n * m)
                return 0;
        }
        for (int k2 = k + 1;
        k2 < n - k; k2++) {
            cout << str[k2][m - k - 1] << endl;
            sum++;
            if (sum == n * m)
                return 0;
        }
        for (int k3 = m - k - 2;
        k3 >= k; k3--) {
            cout << str[n - k - 1][k3] << endl;
            sum++;
            if (sum == n * m)
                return 0;
        }
        for (int k4 = n - k - 2;
        k4 > k; k4--) {
            cout << str[k4][k] << endl;
            sum++;
            if (sum == n * m)
                return 0;
        }
    }
    return 0;
}

