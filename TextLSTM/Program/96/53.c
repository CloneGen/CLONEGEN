int main () {
    char *p;
    int *q, d, n, i, r;
    p = (char *) malloc (101 * sizeof (char));
    q = (int *) malloc (101 * sizeof (int));
    scanf ("%s", p);
    n = strlen (p);
    if (n == 1) {
        printf ("0\n");
        printf ("%d", (p[0] - '0'));
    }
    else if (n == 2 && (((p[0] - '0') * 10 + p[1] - '0') < 13)) {
        printf ("0\n");
        printf ("%d", ((p[0] - '0') * 10 + p[1] - '0'));
    }
    else {
        for (i = 0, d = ((p[0] - '0') * 10 + p[1] - '0'); i < n - 2; i++) {
            if (d < 13) {
                q[i] = 0;
                d = (d * 10 + p[i + 2] - '0');
            }
            else {
                q[i] = d / 13;
                d = ((d - q[i] * 13) * 10 + p[i + 2] - '0');
            }
        }
        if (d < 13) {
            q[n - 2] = 0;
            r = d;
        }
        else {
            q[n - 2] = d / 13;
            r = (d - q[n - 2] * 13);
        }
        if (q[0] == 0)
            for (i = 1; i <= (n - 2); i++)
                printf ("%d", q[i]);
        else
            for (i = 0; i <= (n - 2); i++)
                printf ("%d", q[i]);
        printf ("\n");
        printf ("%d", r);
    }
    return (0);
}

