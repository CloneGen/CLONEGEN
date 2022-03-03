int f (char n) {
    int t;
    if (n > 47 && n < 58)
        t = n - 48;
    else {
        if (n > 64 && n < 91)
            t = n - 55;
        else {
            if (n > 96 && n < 123)
                t = n - 87;
        }
    }
    return t;
}

int main () {
    int a, i, s = 0, k, b, g = 1;
    char n [32], m [32];
    cin >> a >> n >> b;
    for (i = 0; i < strlen (n); i++) {
        for (k = 0; k < strlen (n) - i - 1; k++)
            g = g * a;
        s = s + f (n[i]) * g;
        g = 1;
    }
    i = 0;
    if (s == 0)
        cout << s;
    while (s != 0) {
        k = s % b;
        if (k >= 10)
            m[i] = k + 55;
        else
            m[i] = k + 48;
        s = s / b;
        i++;
    }
    k = i;
    for (i = k - 1; i >= 0; i--) {
        cout << m[i];
    }
    return 0;
}

