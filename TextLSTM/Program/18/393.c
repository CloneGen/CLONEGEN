int main () {
    int n = 0, a [110] [110] = {0}, j = 0, i = 0, k = 0, l = 0, min = 100000, sum = 0;
    int (*p) [110] = a;
    cin >> n;
    for (k = 0; k < n; k++) {
        sum = 0;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++) {
                cin >> *(*(p + i) + j);
            }
        for (l = 0; l < n - 1; l++) {
            for (i = 1; i <= n - l; i++) {
                min = 100000;
                for (j = 1; j <= n - l; j++) {
                    if (*(*(p + i) + j) < min)
                        min = *(*(p + i) + j);
                }
                for (j = 1; j <= n - l; j++) {
                    *(*(p + i) + j) -= min;
                }
            }
            for (j = 1; j <= n - l; j++) {
                min = 100000;
                for (i = 1; i <= n - l; i++) {
                    if (*(*(p + i) + j) < min)
                        min = *(*(p + i) + j);
                }
                for (i = 1; i <= n - l; i++) {
                    *(*(p + i) + j) -= min;
                }
            }
            sum += *(*(p + 2) + 2);
            for (i = 2; i < n - l; i++)
                *(*(p + i) + 1) = *(*(p + i + 1) + 1);
            for (j = 2; j < n - l; j++)
                *(*(p + 1) + j) = *(*(p + 1) + j + 1);
            for (i = 2; i < n - l; i++)
                for (j = 2; j < n - l; j++)
                    *(*(p + i) + j) = *(*(p + i + 1) + j + 1);
        }
        cout << sum << endl;
    }
    return 0;
}

