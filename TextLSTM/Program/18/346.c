int main () {
    int n, i, j, min, sum = 0, t, m;
    int a [105] [105];
    cin >> n;
    t = n;
    m = n;
    while (t > 0) {
        n = m;
        sum = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        while (n > 1) {
            for (i = 0; i < n; i++) {
                min = a[i][0];
                for (j = 0; j < n; j++)
                    if (min > a[i][j])
                        min = a[i][j];
                for (j = 0; j < n; j++)
                    a[i][j] = a[i][j] - min;
            }
            for (j = 0; j < n; j++) {
                min = a[0][j];
                for (i = 0; i < n; i++)
                    if (min > a[i][j])
                        min = a[i][j];
                for (i = 0; i < n; i++)
                    a[i][j] = a[i][j] - min;
            }
            sum = sum + a[1][1];
            for (i = 0; i < n; i++)
                for (j = 1; j < n - 1; j++)
                    a[i][j] = a[i][j + 1];
            for (j = 0; j < n; j++)
                for (i = 1; i < n - 1; i++)
                    a[i][j] = a[i + 1][j];
            n--;
        }
        cout << sum << endl;
        t--;
    }
}

