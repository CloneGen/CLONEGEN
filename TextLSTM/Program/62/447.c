void main () {
    int i, n;
    char *p;
    p = (char *) malloc (100000 * sizeof (char));
    gets (p);
    n = strlen (p);
    for (i = 0; i < n; i++, p++) {
        if (*p != ' ') {
            printf ("%c", *p);
        }
        if (*p == ' ') {
            printf ("%c", *p);
            while (*p == ' ') {
                i++;
                p++;
            }
            i = i - 1;
            p = p - 1;
        }
    }
}

