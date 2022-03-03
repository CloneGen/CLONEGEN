int main () {
    int i, j, n, a [100];
    cin >> n;
    memset (a, 0, sizeof (a));
    a[0] = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++)
            a[j] = a[j] * 2;
        for (j = 0; j < i + 1; j++) {
            a[j + 1] += a[j] / 10;
            a[j] = a[j] % 10;
        }
    }
    i = 99;
    while (a[i] == 0)
        i--;
    for (j = i; j >= 0; j--)
        cout << a[j];
    return 0;
}

