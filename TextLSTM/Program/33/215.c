void main () {
    int n, i, k, len;
    char *p, str1 [1000] [300], str2 [300] [5];
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%s", str1[i]);
    }
    for (i = 1; i <= n; i++) {
        len = strlen (str1[i]);
        for (k = len - 1; k >= 0; k--) {
            p = str1[i] + k;
            if (strcmp (p, "A") == 0) {
                strcpy (str2[k], "T");
            }
            if (strcmp (p, "G") == 0) {
                strcpy (str2[k], "C");
            }
            if (strcmp (p, "C") == 0) {
                strcpy (str2[k], "G");
            }
            if (strcmp (p, "T") == 0) {
                strcpy (str2[k], "A");
            }
            strcpy (p, "\0");
        }
        for (k = 0; k < len - 1; k++) {
            printf ("%s", str2[k]);
        }
        printf ("%s\n", str2[len - 1]);
    }
}

