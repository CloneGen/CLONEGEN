int main () {
    int t;
    cin >> t;
    for (int time = 0;
    time < t; time++) {
        int m, n, sum = 0;
        cin >> m >> n;
        int a [m] [n];
        for (int i = 0;
        i < m; i++)
            for (int j = 0;
            j < n; j++)
                cin >> *(*(a + i) + j);
        for (int i = 0;
        i < n; i++)
            sum += *(*a + i) + (n > 1) * *(*(a + m - 1) + i);
        for (int i = 1;
        i < m - 1; i++)
            sum += *(*(a + i)) + (m > 1) * *(*(a + i) + n - 1);
        cout << sum << endl;
    }
    return 0;
}

