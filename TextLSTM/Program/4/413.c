int main () {
    int n, m, i, j, k = 0;
    cin >> n >> m;
    int a [n] [m];
    int (*p) [m];
    p = a;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> *(*(p + i) + j);
        }
    }
    while (k <= m + n - 2) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (k == i + j)
                    cout << *(*(p + i) + j) << endl;
            }
        }
        k++;
    }
    return 0;
}

