void main () {
    char str1 [300], str2 [300];
    int i, j, m, n, leap = 0, t;
    scanf ("%s", str1);
    scanf ("%s", str2);
    m = strlen (str1);
    n = strlen (str2);
    if (m != n) {
        leap = 1;
    }
    else {
        for (i = 0; i < m; i++) {
            for (j = i; j < m; j++) {
                if (str2[j] == str1[i]) {
                    t = str2[i];
                    str2[i] = str2[j];
                    str2[j] = t;
                }
            }
        }
        if (strcmp (str1, str2) != 0) {
            leap = 1;
        }
    }
    if (leap) {
        printf ("NO");
    }
    else {
        printf ("YES");
    }
}

