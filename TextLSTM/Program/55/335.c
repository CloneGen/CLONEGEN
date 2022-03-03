int main () {
    char s [32];
    int t [32], ex, i, j, p, n = 0, a, b, size;
    cin >> a >> s >> b;
    size = strlen (s);
    for (i = 0; i < 32; ++i) {
        if (s[i] >= 48 && s[i] <= 57)
            t[i] = s[i] - '0';
        else if (s[i] >= 65 && s[i] <= 90)
            t[i] = s[i] - 55;
        else
            t[i] = s[i] - 87;
    }
    for (i = size - 1; i >= 0; i--) {
        p = a;
        ex = size - i - 1;
        if (ex == 0)
            p = 1;
        else
            for (j = 1; j < ex; j++)
                p = p * a;
        n = n + p * t[i];
    }
    for (i = 0; i < 32; i++)
        s[i] = 0;
    for (i = 0; i < 32; i++) {
        t[i] = n % b;
        n = (n - (n % b)) / b;
        if (t[i] >= 10)
            s[i] = t[i] + 55;
        else
            s[i] = t[i] + 48;
        if (n == 0)
            break;
    }
    for (i = 31; i >= 0; i--) {
        if (s[i] != 0)
            cout << s[i];
    }
    return 0;
}

