int main () {
    int n, i, j, k, l, min, sum;
    int a [200] [200];
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            for (k = 1; k <= n; k++)
                cin >> a[j][k];
        l = n;
        sum = 0;
        while (n >= 2) {
            for (j = 1; j <= n; j++) {
                min = a[j][1];
                for (k = 1; k <= n; k++)
                    if (a[j][k] < min)
                        min = a[j][k];
                for (k = 1; k <= n; k++)
                    a[j][k] -= min;
            }
            for (k = 1; k <= n; k++) {
                min = a[1][k];
                for (j = 1; j <= n; j++)
                    if (a[j][k] < min)
                        min = a[j][k];
                for (j = 1; j <= n; j++)
                    a[j][k] -= min;
            }
            sum += a[2][2];
            for (j = 2; j <= n - 1; j++)
                for (k = 1; k <= n; k++)
                    a[j][k] = a[j + 1][k];
            for (k = 2; k <= n - 1; k++)
                for (j = 1; j <= n - 1; j++)
                    a[j][k] = a[j][k + 1];
            n--;
        }
        n = l;
        cout << sum << endl;
    }
}

