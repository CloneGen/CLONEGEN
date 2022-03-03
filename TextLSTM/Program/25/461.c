int main () {
    int N = 0, i = 0, n = 0, r = 0, temp = 0;
    int a [35];
    cin >> N;
    memset (a, 0, sizeof (a));
    a[0] = 1;
    while (N--) {
        for (i = 0; i < 35; i++) {
            temp = r;
            r = (a[i] * 2 + r) / 10;
            a[i] = (a[i] * 2 + temp) % 10;
        }
    }
    for (n = 34; a[n] == 0; n--)
        ;
    for (; n >= 0; n--)
        cout << a[n];
    return 0;
}

