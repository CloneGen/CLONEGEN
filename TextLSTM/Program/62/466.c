void main () {
    int i, n;
    char *p, q [1000];
    gets (q);
    n = strlen (q);
    p = q;
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

