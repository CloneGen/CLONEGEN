main () {
    int n, a = 3, b = 1, c = 2, s;
    scanf ("%d", &n);
    while (n != 1) {
        if (n % 2 == 1) {
            s = n * a + b;
            printf ("%d*%d+%d=%d\n", n, a, b, s);
        }
        else {
            s = n / c;
            printf ("%d/%d=%d\n", n, c, s);
        }
        n = s;
    }
    printf ("End");
    getchar ();
    getchar ();
}

