int main () {
    double a [350], b [20], temp, sum = 0;
    int i, j, k = 0, n;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }
    for (i = 0; i < n - 1; i++)
        for (j = i; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    if (a[0] * n + a[n - 1] * n > sum * 2) {
        for (i = 0; i < n; i++) {
            if (a[i] == a[n - 1]) {
                b[k] = a[i];
                k++;
            }
        }
    }
    if (a[0] * n + a[n - 1] * n == sum * 2) {
        for (i = 0; i < n; i++) {
            if (a[i] == a[0] || a[i] == a[n - 1]) {
                b[k] = a[i];
                k++;
            }
        }
    }
    if (a[0] * n + a[n - 1] * n < sum * 2) {
        for (i = 0; i < n; i++) {
            if (a[i] == a[0]) {
                b[k] = a[i];
                k++;
            }
        }
    }
    for (i = 0; i < k - 1; i++)
        cout << b[i] << ",";
    cout << b[k - 1];
    return 0;
}

