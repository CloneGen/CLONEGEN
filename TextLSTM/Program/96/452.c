int main () {
    char a [100];
    int b [100], c, d, i, e, n;
    scanf ("%s", a);
    for (i = 0; a[i] != 0; i++) {
        b[i] = a[i] - '0';
    }
    c = 10 * b[0] + b[1];
    n = strlen (a);
    if (n == 1)
        printf ("0\n%d", b[0]);
    else if (n == 2) {
        printf ("%d\n%d", c / 13, c % 13);
    }
    else {
        if (c < 13) {
            for (i = 2; i < n; i++) {
                c = 10 * c + b[i];
                e = c / 13;
                c = c % 13;
                printf ("%d", e);
            }
        }
        else {
            for (i = 2; i < n; i++) {
                e = c / 13;
                c = c % 13;
                c = 10 * c + b[i];
                printf ("%d", e);
            }
            printf ("%d", c / 13);
        }
        c = c % 13;
        printf ("\n%d", c);
    }
}

