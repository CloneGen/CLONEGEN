int main () {
    int n;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    scanf ("%d", &n);
    a = n / 100;
    n %= 100;
    b = n / 50;
    n %= 50;
    c = n / 20;
    n %= 20;
    d = n / 10;
    n %= 10;
    e = n / 5;
    n %= 5;
    f = n;
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", c);
    printf ("%d\n", d);
    printf ("%d\n", e);
    printf ("%d\n", f);
    return 0;
}

