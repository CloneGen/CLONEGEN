main () {
    char a [100];
    int e;
    int n, i, b, k;
    scanf ("%s", a);
    n = strlen (a);
    if (n == 2) {
        k = (a[0] - '0') * 10 + a[1] - '0';
        e = k / 13;
        b = k % 13;
        printf ("%d\n%d", e, b);
    }
    else if (n == 1) {
        e = 0;
        b = a[0] - '0';
        printf ("%d\n%d", e, b);
    }
    else {
        if ((a[0] - '0') * 10 + (a[1] - '0') < 13) {
            e = ((a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0')) / 13;
            b = ((a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0')) % 13;
            printf ("%d", e);
            for (i = 1; i < n - 2; i++) {
                e = (b * 10 + (a[i + 2] - '0')) / 13;
                b = (b * 10 + (a[i + 2] - '0')) % 13;
                printf ("%d", e);
            }
            printf ("\n%d", b);
        }
        else {
            e = ((a[0] - '0') * 10 + (a[1] - '0')) / 13;
            b = ((a[0] - '0') * 10 + (a[1] - '0')) % 13;
            printf ("%d", e);
            for (i = 1; i < n - 1; i++) {
                e = (b * 10 + (a[i + 1] - '0')) / 13;
                b = (b * 10 + (a[i + 1] - '0')) % 13;
                printf ("%d", e);
            }
            printf ("\n%d", b);
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

