int main () {
    int k, m, n, sum, a [100] [100], i, j;
    cin >> k;
    while (k--) {
        sum = 0;
        cin >> m >> n;
        int (*p) [100];
        p = a;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                cin >> *(*(p + i) + j);
        for (i = 0; i < m; i++)
            sum = sum + **(p + i) + *(*(p + i) + n - 1);
        for (j = 0; j < n; j++)
            sum = sum + *(*p + j) + *(*(p + m - 1) + j);
        sum = sum - **p - *(*p + n - 1) - **(p + m - 1) - *(*(p + m - 1) + n - 1);
        cout << sum << endl;
    }
}

