void main () {
    int n, m;
    scanf ("%d", &n);
    if (n == 1)
        printf ("End");
loop :
    while (n % 2 == 0) {
        m = n / 2;
        printf ("%d/2=%d\n", n, m);
        n = m;
        if (n == 1) {
            printf ("End");
            break;
        }
    }
    if (n != 1) {
        m = n * 3 + 1;
        printf ("%d*3+1=%d\n", n, m);
        n = m;
        goto loop;
        printf ("End");
    }
}

