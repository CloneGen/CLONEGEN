int main () {
    char s [1000];
    int m, i, j, l, a [1000], k, b [1000];
    scanf ("%s", &s);
    l = strlen (s);
    if (l == 1) {
        printf ("0\n");
        printf ("%d\n", s[0] - '0');
    }
    else if (l == 2) {
        if ((s[0] - '0') * 10 + (s[1] - '0') < 13) {
            printf ("0\n");
            printf ("%d\n", (s[0] - '0') * 10 + (s[1] - '0'));
        }
        else {
            printf ("%d\n", ((s[0] - '0') * 10 + (s[1] - '0')) / 13);
            printf ("%d\n", ((s[0] - '0') * 10 + (s[1] - '0')) % 13);
        }
    }
    else {
        for (i = 0; i < l; i++)
            b[i] = s[i] - '0';
        for (i = 0; i < l; i++) {
            m = b[i] * 10 + b[i + 1];
            if (m >= 13) {
                a[i] = m / 13;
                b[i + 1] = m % 13;
            }
            else {
                a[i] = 0;
                m = m * 10 + b[i + 2];
                i++;
                a[i] = m / 13;
                b[i + 1] = m % 13;
            }
        }
        k = b[i - 1];
        if (a[0] == 0) {
            for (i = 1; i < l - 1; i++)
                printf ("%d", a[i]);
            printf ("\n%d", k);
        }
        else {
            for (i = 0; i < l - 1; i++)
                printf ("%d", a[i]);
            printf ("\n%d", k);
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    return 0;
}

