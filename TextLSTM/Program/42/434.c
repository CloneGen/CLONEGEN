int main () {
    int n = 0, k = 0, i = 0, j = 0, l = 0, m = 0;
    cin >> n;
    int a [100000];
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    cin >> k;
    while (j < n) {
        while (a[j] == k && j <= n - 1) {
            for (l = j; l <= n - 2; l++) {
                a[l] = a[l + 1];
            }
            n--;
        }
        j++;
    }
    for (m = 0; m <= n - 2; m++)
        cout << a[m] << ' ';
    cout << a[m];
    return 0;
}

