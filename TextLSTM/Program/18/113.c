int main () {
    int n, m, i, j, k, a [100] [100], b [100], c [100];
    cin >> n;
    for (k = 0; k < n; k++) {
        c[k] = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        for (m = n; m > 1; m--) {
            for (i = 0; i < m; i++) {
                b[i] = a[i][0];
                for (j = 1; j < m; j++)
                    if (b[i] > a[i][j])
                        b[i] = a[i][j];
                for (j = 0; j < m; j++)
                    a[i][j] = a[i][j] - b[i];
            }
            for (i = 0; i < m; i++) {
                b[i] = a[0][i];
                for (j = 1; j < m; j++)
                    if (b[i] > a[j][i])
                        b[i] = a[j][i];
                for (j = 0; j < m; j++)
                    a[j][i] = a[j][i] - b[i];
            }
            c[k] += a[1][1];
            for (i = 1; i < m - 1; i++)
                a[i][0] = a[i + 1][0];
            for (j = 1; j < m - 1; j++)
                a[0][j] = a[0][j + 1];
            for (i = 1; i < m - 1; i++)
                for (j = 1; j < m - 1; j++)
                    a[i][j] = a[i + 1][j + 1];
        }
    }
    for (k = 0; k < n; k++)
        cout << c[k] << endl;
    return 0;
}

