void main () {
    char fst [100], lst [100], tmp;
    int n, i, len1, len2;
    scanf ("%s", fst);
    scanf ("%s", lst);
    len1 = strlen (fst);
    len2 = strlen (lst);
    if (len1 != len2)
        printf ("NO\n");
    else {
        for (i = 1; i < len1; i++) {
            for (n = 0; n < (len1 - i); n++) {
                if (fst[n] >= fst[n + 1]) {
                    tmp = fst[n];
                    fst[n] = fst[n + 1];
                    fst[n + 1] = tmp;
                }
            }
        }
        for (i = 1; i < len2; i++) {
            for (n = 0; n < (len2 - i); n++) {
                if (lst[n] >= lst[n + 1]) {
                    tmp = lst[n];
                    lst[n] = lst[n + 1];
                    lst[n + 1] = tmp;
                }
            }
        }
        if (strcmp (fst, lst) == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
}

