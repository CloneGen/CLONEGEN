int main () {
    int a, sn, b, j, k, q, l, t, i;
    double m;
    int s = 0;
    char n [100], p [100];
    cin >> a;
    cin >> n;
    cin >> b;
    sn = strlen (n);
    for (i = 0; i < sn; i++) {
        if (n[i] >= 97)
            n[i] = n[i] - 32;
    }
    for (i = sn - 1; i >= 0; i--) {
        if (n[i] <= 57) {
            j = n[i] - 48;
            t = sn - 1 - i;
            s = s + (j * pow ((double) a, (double) (t)));
        }
        else {
            j = n[i] - 55;
            m = pow ((double) a, (double) (sn - 1 - i));
            s = s + j * m;
        }
    }
    if (s == 0) {
        cout << s;
        return 0;
    }
    for (i = 0; s != 0; i++) {
        q = s % b;
        if (q <= 9)
            p[i] = (48 + q);
        else
            p[i] = (55 + q);
        s = (s - q) / b;
    }
    p[i] = '\0';
    l = strlen (p);
    for (i = l - 1; i >= 0; i--)
        cout << p[i];
}

