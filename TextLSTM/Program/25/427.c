int main () {
    int n, i, j, g;
    int a [50] = {0};
    cin >> n;
    a[0] = 1;
    a[1] = 1;
    for (i = 1; i <= n; i++) {
        g = 0;
        for (j = 1; j <= a[0]; j++) {
            a[j] = a[j] * 2 + g;
            g = a[j] / 10;
            a[j] = a[j] % 10;
        }
        while (g > 0) {
            a[0]++;
            a[a[0]] = g % 10;
            g = g / 10;
        }
    }
    for (i = a[0]; i > 0; i--)
        cout << a[i];
    return 0;
}

