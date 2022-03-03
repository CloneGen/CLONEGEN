int main () {
    int i, r, p, q;
    int n, m, k;
    int a [100] [100];
    int b [100] [100];
    int c [100] [100] = {0};
    cin >> n >> m;
    for (r = 0; r < n; r++) {
        for (p = 0; p < m; p++) {
            cin >> a[r][p];
        }
    }
    cin >> m >> k;
    for (r = 0; r < m; r++) {
        for (p = 0; p < k; p++) {
            cin >> b[r][p];
        }
    }
    for (r = 0; r < n; r++) {
        for (p = 0; p < k; p++) {
            for (q = 0; q < m; q++) {
                c[r][p] = c[r][p] + a[r][q] * b[q][p];
            }
        }
    }
    for (r = 0; r < n; r++) {
        for (p = 0; p < k - 1; p++) {
            cout << c[r][p] << " ";
        }
        cout << c[r][k - 1] << endl;
    }
    return 0;
}

