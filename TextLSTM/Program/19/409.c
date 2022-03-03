void main () {
    char *p, *a, *b, *t1, *t2, *t3;
    int i, j, k, r, n0, n1, n2, n, m;
    p = (char *) malloc (200 * sizeof (char));
    a = (char *) malloc (100 * sizeof (char));
    b = (char *) malloc (100 * sizeof (char));
    t1 = (char *) malloc (100 * sizeof (char));
    t2 = (char *) malloc (100 * sizeof (char));
    t3 = (char *) malloc (300 * sizeof (char));
    gets (p);
    gets (a);
    gets (b);
    n = strlen (p);
    m = 0;
    for (i = 0, k = 0; i < n; i++) {
        r = 0;
        if ((*(p + i) == ' ') || (i == 0)) {
            r = 1;
            if (i != 0)
                n1 = i + 1;
            else
                n1 = i;
        }
        if (r == 1) {
            for (i = n1, j = 0; (*(p + i) != ' ') && (*(p + i) != '\0'); i++, j++) {
                *(t1 + j) = *(p + i);
            }
            i = i - 1;
            *(t1 + j) = '\0';
        }
        n2 = i + 1;
        if (strcmp (t1, a) == 0) {
            if (n2 != n)
                printf ("%s ", b);
            else
                printf ("%s", b);
            m = 1;
        }
        else {
            if (n2 != n)
                printf ("%s ", t1);
            else
                printf ("%s", t1);
            strcpy (t1, " ");
        }
    }
}

