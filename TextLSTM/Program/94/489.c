int main () {
    int a [501];
    int i, k = 0, n, j, x;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x;
        if (x % 2 == 1) {
            k++;
            a[k] = x;
        }
    }
    for (i = 1; i <= k; i++)
        for (j = i + 1; j <= k; j++)
            if (a[i] > a[j]) {
                a[0] = a[i];
                a[i] = a[j];
                a[j] = a[0];
            }
    for (i = 1; i <= k - 1; i++)
        cout << a[i] << ',';
    cout << a[k] << endl;
    return 0;
}

