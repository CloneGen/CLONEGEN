int main () {
    int pay, a, b, c, d, e, f;
    scanf ("%d", &pay);
    for (a = 0; 1; a++) {
        if (pay - 100 * (a + 1) < 0) {
            printf ("%d\n", a);
            break;
        }
    }
    pay -= 100 * a;
    for (b = 0; 1; b++) {
        if (pay - 50 * (b + 1) < 0) {
            printf ("%d\n", b);
            break;
        }
    }
    pay -= 50 * b;
    for (c = 0; 1; c++) {
        if (pay - 20 * (c + 1) < 0) {
            printf ("%d\n", c);
            break;
        }
    }
    pay -= 20 * c;
    for (d = 0; 1; d++) {
        if (pay - 10 * (d + 1) < 0) {
            printf ("%d\n", d);
            break;
        }
    }
    pay -= 10 * d;
    for (e = 0; 1; e++) {
        if (pay - 5 * (e + 1) < 0) {
            printf ("%d\n", e);
            break;
        }
    }
    pay -= 5 * e;
    for (f = 0; 1; f++) {
        if (pay - 1 * (f + 1) < 0) {
            printf ("%d\n", f);
            break;
        }
    }
    return 0;
}

