void main () {
    int n, i = 0, c, d, e, f;
    scanf ("%d", &n);
    if (n == 1)
        printf ("End\n");
    else {
        while (i != 1) {
            if (n % 2 != 0) {
                c = 3 * n + 1;
                d = n;
                n = c;
                printf ("%d*3+1=%d\n", d, c);
            }
            else {
                e = n / 2;
                f = n;
                n = e;
                i = e;
                printf ("%d/2=%d\n", f, e);
            }
        }
        printf ("End\n");
    }
}

