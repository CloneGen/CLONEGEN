void main () {
    char s [501], str2 [500] [6];
    int i, a, j, t, b, k [500], temp, max, n, l;
    scanf ("%d\n", &n);
    gets (s);
    l = strlen (s);
    for (i = 0; i < l; i++) {
        for (j = 0; j < n; j++)
            str2[i][j] = s[i + j];
        str2[i][j] = '\0';
    }
    for (i = 0; i < l; i++)
        k[i] = 1;
    for (i = 0; i < l; i++) {
        for (j = i + 1; j < l; j++) {
            b = strcmp (str2[i], str2[j]);
            if (b == 0)
                k[i] = k[i] + 1;
        }
    }
    max = k[0];
    for (i = 0; i <= l; i++) {
        if (max < k[i])
            max = k[i];
    }
    t = 0;
    if (max <= 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = 0; i <= l; i++) {
            if (k[i] == max) {
                for (a = i; a >= 0; a--) {
                    if (strcmp (str2[i], str2[j]) != 0)
                        temp = 1;
                    else
                        temp = 0;
                }
                if (temp == 1)
                    printf ("%s\n", str2[i]);
            }
        }
    }
}

