int main () {
    int n, m, sum, i, j;
    int a [20];
    cin >> n;
    for (i = 1; i <= n; i++) {
        sum = 60;
        cin >> m;
        for (j = 1; j <= m; j++) {
            cin >> a[j];
            if (a[j] + 3 * (j - 1) < 57)
                sum = 60 - 3 * j;
            else if (a[j] + 3 * (j - 1) >= 60)
                continue;
            else
                sum = a[j];
        }
        cout << sum << endl;
    }
    return 0;
}

