void main () {
    int a, b, i, c, d, e, f;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    scanf ("%d", &a);
    for (i = 1; i <= 10000; i = i * 10) {
        b = (a % (10 * i) - a % (i)) / i;
        c = c + b * 10000 / i;
    }
    if ((c % 10) != 0)
        printf ("%d", c);
    else {
        d = c / 10;
        if ((d % 10) != 0)
            printf ("%d", d);
        else {
            e = d / 10;
            if ((e % 10) != 0)
                printf ("%d", e);
            else {
                f = e / 10;
                if ((f % 10) != 0)
                    printf ("%d", f);
                else {
                    printf ("%d", f / 10);
                }
            }
        }
    }
}

