int main () {
    int n, q, m, p, t, h, r, s, a, b, c;
    scanf ("%d", &n);
    m = (n - n % 100) / 100;
    a = n % 100;
    b = (a - a % 10) / 10;
    if (b >= 5) {
        p = 1;
        q = b - 5;
    }
    if (b < 5) {
        p = 0;
        q = b;
    }
    if (q == 4) {
        t = 2;
        h = 0;
    }
    if (q == 3) {
        t = 1;
        h = 1;
    }
    if (q == 2) {
        t = 1;
        h = 0;
    }
    if (q == 1) {
        t = 0;
        h = 1;
    }
    if (q == 0) {
        t = 0;
        h = 0;
    }
    c = a % 10;
    if (c >= 5) {
        r = 1;
        s = c - 5;
    }
    if (c < 5) {
        r = 0;
        s = c;
    }
    printf ("%d\n%d\n%d\n%d\n%d\n%d", m, p, t, h, r, s);
    return 0;
}

