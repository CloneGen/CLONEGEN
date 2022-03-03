void hxprint (int a [] [100], int n, int m) {
    int i, j, b [100] [100];
    if (n == 0 || m == 0) {
        return;
    }
    else {
        for (j = 0; j < m; j++)
            cout << a[0][j] << endl;
        for (i = 1; i < n; i++)
            cout << a[i][m - 1] << endl;
        if (n == 1 || m == 1)
            return;
        else {
            for (j = m - 2; j >= 0; j--)
                cout << a[n - 1][j] << endl;
            for (i = n - 2; i >= 1; i--)
                cout << a[i][0] << endl;
            for (i = 0; i < n - 2; i++)
                for (j = 0; j < m - 2; j++) {
                    b[i][j] = a[i + 1][j + 1];
                }
            hxprint (b, n - 2, m - 2);
        }
    }
}

int main () {
    int i, j, a [100] [100], n, m;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    hxprint (a, n, m);
    return 0;
}

