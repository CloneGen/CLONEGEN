int main () {
    int i, a, b, n, e [100], f [100], value = 0;
    char c [100], d [100];
    cin >> a >> c >> b;
    n = strlen (c);
    for (i = 0; i < n; i++)
        if (c[i] > 91)
            c[i] = c[i] - 32;
    for (i = 0; i < n; i++) {
        if (c[i] > 60)
            c[i] = c[i] - 55;
        else
            c[i] = c[i] - 48;
    }
    for (i = 0; i < n; i++)
        e[i] = (int) (c[i]);
    for (i = 0; i < n; i++)
        value = value + e[i] * pow ((double) a, (double) (n - i - 1));
    if (value == 0)
        cout << value;
    for (i = 0; i < 100; i++)
        if (pow ((double) b, (double) i) < value) {
            f[i] = (value % ((int) pow ((double) b, (double) (i + 1)))) / (int) pow ((double) b, (double) i);
            d[i] = (char) (f[i]);
            if (d[i] > 9)
                d[i] = d[i] + 55;
            else
                d[i] = d[i] + 48;
        }
    for (i = 99; i >= 0; i--)
        if (pow ((double) b, (double) i) < value) {
            cout << d[i];
        }
    return 0;
}

