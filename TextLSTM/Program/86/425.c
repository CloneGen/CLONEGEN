int main () {
    int n, i, j;
    int t;
    int a [60] = {0};
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> t;
        for (j = 0; j < t; j++)
            cin >> a[j];
        if (a[t - 1] + 3 * t <= 60)
            cout << 60 - 3 * t << endl;
        else {
            for (j = 0; j < t; j++) {
                if (a[j] + 3 * (j + 1) >= 60 && a[j] + 3 * (j + 1) <= 63) {
                    cout << a[j] << endl;
                    break;
                }
                if (a[j] + 3 * (j + 1) > 63) {
                    cout << 60 - 3 * j << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

