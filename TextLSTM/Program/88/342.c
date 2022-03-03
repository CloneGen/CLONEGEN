int main () {
    int i;
    char *p, *p1, *q;
    p1 = p = (char *) malloc (32 * sizeof (char));
    for (i = 0; *(p + i - 1) != '\n'; i++) {
        scanf ("%c", (p + i));
    }
    for (q = (p + 32);; q--) {
        if (*q > 47 && *q < 58)
            break;
    }
    for (; *p != '\0'; p++) {
        if (p < q) {
            if ((*p > 47 && *p < 58) && (*(p + 1) > 47 && *(p + 1) < 58)) {
                printf ("%c", *p);
            }
            if ((*p > 47 && *p < 58) && (*(p + 1) < 48 || *(p + 1) > 57)) {
                printf ("%c\n", *p);
            }
        }
        if (p == q) {
            printf ("%c", *p);
            break;
        }
    }
    return 0;
}

