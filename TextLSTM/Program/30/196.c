main () {
    int n, i, s, a, b, c;
    cin >> n;
    s = n * (n + 1) * (2 * n + 1) / 6;
    if (n < 7) {
        cout << s;
        return (0);
    }
    a = 0;
    for (i = 17; i <= n; i += 10)
        a = a + i * i;
    b = 0;
    for (i = 7; i <= n; i += 7)
        b = b + i * i;
    c = 0;
    if (n > 70)
        for (i = 71; (i <= n) && (i <= 79); i++)
            c = c + i * i;
    s = s - a - b - c;
    if (n >= 77)
        s += 2 * 77 * 77;
    cout << s;
    return (0);
}

