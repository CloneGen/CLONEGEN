int main () {
    char *p1, *p2, *p, *pp, *p1s;
    p1 = (char *) malloc (100 * sizeof (char));
    p2 = (char *) malloc (100 * sizeof (char));
    p = (char *) malloc (100 * sizeof (char));
    pp = (char *) malloc (100 * sizeof (char));
    while (scanf ("%s%s", p1, p2) != EOF) {
        int max = 0;
        pp = p1;
        p1s = p1;
        while (*p1 != '\0') {
            if (*p1 > max)
                max = *p1;
            p1++;
        }
        char *ps;
        ps = p;
        while (*pp != max) {
            *p = *pp;
            p++;
            pp++;
        }
        *p = *pp;
        p++;
        pp++;
        *p = '\0';
        strcat (ps, p2);
        while (*p != '\0')
            *p++;
        while (*pp != '\0') {
            *p = *pp;
            p++;
            pp++;
        }
        *p = '\0';
        printf ("%s\n", ps);
    }
    return 0;
}

