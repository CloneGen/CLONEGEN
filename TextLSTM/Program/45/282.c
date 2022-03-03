void main () {
    char a [100] = {0}, b [100] = {0}, *p, *q, *k;
    int out;
    scanf ("%s", a);
    scanf ("%s", b);
    for (p = b; *p != '\0'; p++) {
        for (k = p, q = a;; k++, q++) {
            if (!(*q != '\0' && *k == *q))
                break;
        }
        if (*q == '\0') {
            out = p - b;
            break;
        }
    }
    printf ("%d", out);
}

