int main () {
    char *p;
    int n, i, j, k;
    int *q;
    scanf ("%d\n", &n);
    q = (int *) malloc (n * sizeof (int));
    for (i = 0; i < n; i++) {
        p = (char *) malloc (80 * sizeof (char));
        gets (p);
        for (j = 0; *(p + j) != '\0'; j++) {
            if (*(p + j) == '_' || (*(p + j) >= 'A' && *(p + j) <= 'Z') || (*(p + j) >= 'a' && *(p + j) <= 'z') || (*(p + j) >= '0') && (*(p + j) <= '9')) {
                k = 1;
            }
            else {
                k = 0;
                break;
            }
        }
        if ((*p == '_' || (*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) && (k == 1)) {
            *(q + i) = 1;
        }
        else {
            *(q + i) = 0;
        }
    }
    printf ("%d", *q);
    for (i = 1; i < n; i++) {
        printf ("\n%d", *(q + i));
    }
}

