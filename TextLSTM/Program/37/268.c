main () {
    int n, i, j, k, num, f, wu, c;
    char *start;
    scanf ("%d", &n);
    char *p [n];
    for (c = 0; c < n; c++) {
        p[c] = (char *) malloc (100 * sizeof (char));
        scanf ("%s", p[c]);
    }
    for (c = 0; c < n; c++) {
        num = strlen (p[c]);
        wu = 0;
        for (i = 0; i < num; i++) {
            f = 0;
            for (j = 0; j < num; j++) {
                int temp;
                temp = *p[c];
                if (*(p[c] + j) == *(p[c] + i)) {
                    f++;
                }
            }
            if (f == 1) {
                printf ("%c", *(p[c] + i));
                wu = 1;
            }
            if (f == 1)
                break;
        }
        if (wu == 0)
            printf ("no");
        printf ("\n");
    }
}

