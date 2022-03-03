int a [100] [100] = {0};

void cut (int m, int n) {
    int i, j;
    if (m == 0 || n == 0)
        return;
    if (m == 1) {
        for (i = 0; i < n; i++)
            cout << a[0][i] << endl;
        return;
    }
    if (n == 1) {
        for (i = 0; i < m; i++)
            cout << a[i][0] << endl;
        return;
    }
    for (i = 0; i < n; i++)
        cout << a[0][i] << endl;
    for (i = 1; i < m; i++)
        cout << a[i][n - 1] << endl;
    for (i = n - 2; i >= 0; i--)
        cout << a[m - 1][i] << endl;
    for (i = m - 2; i > 0; i--)
        cout << a[i][0] << endl;
    for (i = 0; i < m - 2; i++)
        for (j = 0; j < n - 2; j++) {
            a[i][j] = a[i + 1][j + 1];
        }
    cut (m - 2, n - 2);
}

int main () {
    int m, n, i, j;
    cin >> m >> n;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    cut (m, n);
    return 0;
}

