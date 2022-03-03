int ss = 0;

void check (char *ps) {
    static int k, m;
    if (*ps == ' ' || *ps == '\0') {
        if (m == 1) {
            m = 0;
            if (ss == 0) {
                ss = 1;
                printf ("%d", k);
            }
            else
                printf (",%d", k);
            m = 0;
            k = 0;
        }
        if (*ps == '\0')
            return;
    }
    else {
        m = 1;
        k++;
    }
    check (ps + 1);
}

main () {
    char *p;
    p = (char *) malloc (10000 * sizeof (char));
    gets (p);
    check (p);
}

