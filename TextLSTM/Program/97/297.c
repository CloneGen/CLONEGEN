int main () {
    int n, a = 0, b = 0, c = 0, e = 0, f = 0, g = 0;
    scanf ("%d", &n);
    if (n >= 100)
        do {
            n -= 100;
            a += 1;
        }
        while (n >= 100);
    if (n >= 50)
        do {
            n -= 50;
            b += 1;
        }
        while (n >= 50);
    if (n >= 20)
        do {
            n -= 20;
            c += 1;
        }
        while (n >= 20);
    if (n >= 10)
        do {
            n -= 10;
            e += 1;
        }
        while (n >= 10);
    if (n >= 5)
        do {
            n -= 5;
            f += 1;
        }
        while (n >= 5);
    if (n >= 1)
        do {
            n -= 1;
            g += 1;
        }
        while (n >= 1);
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", c);
    printf ("%d\n", e);
    printf ("%d\n", f);
    printf ("%d\n", g);
    return 0;
}

