int main () {
    int a [101] [101], b [101] [101], i, n, m, j [101] [101], k, c, d, x;
    cin >> n;
    cin >> m;
    for (i = 0; i < n; i++)
        for (k = 0; k < m; k++)
            cin >> a[i][k];
    cin >> c;
    cin >> d;
    for (i = 0; i < c; i++)
        for (k = 0; k < d; k++)
            cin >> b[i][k];
    for (i = 0; i < 101; i++)
        for (k = 0; k < 101; k++)
            j[i][k] = 0;
    for (i = 0; i < n; i++)
        for (k = 0; k < d; k++) {
            for (x = 0; x <= c; x++)
                j[i][k] = a[i][x] * b[x][k] + j[i][k];
        }
    for (i = 0; i < n; i++) {
        for (k = 0; k < d - 1; k++)
            cout << j[i][k] << " ";
        cout << j[i][k] << endl;
    }
    return 0;
}

