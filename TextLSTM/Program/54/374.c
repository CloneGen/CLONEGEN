int main () {
    int n, k, m;
    cin >> n >> k;
    int i, j, flag = 1;
    for (i = 1; flag == 1; i++) {
        m = n * i + k;
        for (j = 1; j <= n - 1; j++)
            if (m % (n - 1) == 0)
                m = m * n / (n - 1) + k;
            else
                break;
        if (j == n) {
            cout << m;
            flag = 0;
        }
    }
}

