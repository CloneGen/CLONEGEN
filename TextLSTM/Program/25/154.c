int main () {
    int n, m, a [100] = {0}, l = 1, i, j;
    a[1] = 1;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= l; j++)
            a[j] = 2 * a[j];
        for (j = 1; j < l; j++) {
            if (a[j] >= 10) {
                a[j + 1] = a[j + 1] + 1;
                a[j] = a[j] - 10;
            }
        }
        if (a[l] >= 10) {
            a[l] = a[l] - 10;
            a[l + 1] = 1;
            l++;
        }
    }
    for (i = l; i >= 1; i--)
        cout << a[i];
    return 0;
}

