int main () {
    int m = 0, n = 0, i = 0, j = 0, a [22] [22] = {0}, b [400] [2], p = 0, q = 0;
    cin >> m >> n;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++) {
            if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1]) {
                b[p][0] = i;
                b[p][1] = j;
                p++;
            }
            else
                continue;
        }
    for (i = 0; i < p; i++)
        cout << b[i][0] - 1 << " " << b[i][1] - 1 << endl;
    return 0;
}

