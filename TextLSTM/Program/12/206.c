int main () {
    int a [17] [1000], i, j, k, s [1000] = {0};
    int sum [1000] = {0}, g = 0, n;
    for (i = 0, k = 0; i <= 1000; i++, k++) {
        for (j = 0; j <= 16; j++, s[i]++) {
            cin >> a[j][i];
            if (a[j][i] == 0)
                break;
            else if (a[j][i] == -1) {
                g = 1;
                break;
            }
        }
        if (g == 1)
            break;
    }
    for (i = 0; i <= k - 1; i++) {
        for (j = s[i]; j >= 0; j--) {
            for (n = 0; n < j; n++) {
                if (a[n][i] < a[j][i]) {
                    if (a[j][i] == 2 * a[n][i])
                        sum[i]++;
                }
                else {
                    if (a[n][i] == 2 * a[j][i])
                        sum[i]++;
                }
            }
        }
        cout << sum[i] << endl;
    }
    return 0;
}

