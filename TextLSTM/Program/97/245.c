int main () {
    int n, a, b, c, d, e, f;
    scanf ("%d", &n);
    if ((n / 100) != 0) {
        a = n / 100;
        n -= (a * 100);
    }
    else {
        a = 0;
    }
    if (n / 50 != 0) {
        b = n / 50;
        n -= (b * 50);
    }
    else {
        b = 0;
    }
    if (n / 20 != 0) {
        c = n / 20;
        n -= (c * 20);
    }
    else {
        c = 0;
    }
    if (n / 10 != 0) {
        d = n / 10;
        n -= (d * 10);
    }
    else {
        d = 0;
    }
    if (n / 5 != 0) {
        e = n / 5;
        n -= (e * 5);
    }
    else {
        e = 0;
    }
    f = n;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, f);
    return 0;
}

