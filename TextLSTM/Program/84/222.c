int main () {
    int i, a, b, c, d;
    scanf ("%d\n", &c);
    c = c - 2;
    scanf ("%d%d", &i, &b);
    while (c > 0) {
        scanf ("%d", &a);
        if (a >= i && b >= a) {
            i = b;
            b = a;
        }
        if (a <= i && b <= a) {
            i = i;
            b = a;
        }
        if (a <= i && b >= i) {
            d = i;
            i = b;
            b = d;
        }
        if (a >= i && b <= i) {
            d = i;
            i = a;
            b = d;
        }
        if (a >= b && b >= i) {
            i = a;
            b = b;
        }
        if (a <= b && b <= i) {
            i = i;
            b = b;
        }
        c--;
    }
    printf ("%d\n", i);
    printf ("%d\n", b);
    return 0;
}

