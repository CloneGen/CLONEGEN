int main () {
    int k;
    cin >> k;
    for (int i = 0;
    i < k; i++) {
        int m, n, a [100] [100], j, l, sum = 0;
        cin >> m >> n;
        for (j = 0; j < m; j++)
            for (l = 0; l < n; l++)
                cin >> a[j][l];
        for (j = 0; j < m; j++)
            sum = sum + *(*(a + j)) + *(*(a + j) + n - 1);
        for (j = 1; j < n - 1; j++)
            sum = sum + *(*a + j) + *(*(a + m - 1) + j);
        cout << sum << endl;
    }
    return 0;
}

