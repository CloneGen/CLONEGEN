void main () {
    char str1 [50], str2 [50], t;
    int m, n, leap = 1, i, j, w = 0;
    scanf ("%s %s", str1, str2);
    m = strlen (str1);
    n = strlen (str2);
    if (m != n) {
        leap = 0;
    }
    if (m == n) {
        for (i = 0; i < m; i++) {
            for (j = w; j < n; j++) {
                if (str1[i] == str2[j]) {
                    t = str2[j];
                    str2[j] = str2[w];
                    str2[w] = t;
                    w++;
                    break;
                }
                if (j == n - 1 && str1[i] != str2[j]) {
                    leap = 0;
                }
            }
        }
        for (i = 0; i < m; i++) {
            for (j = w; j < n; j++) {
                if (str2[i] == str1[j]) {
                    t = str1[j];
                    str1[j] = str1[w];
                    str1[w] = t;
                    w++;
                    break;
                }
                if (j == n - 1 && str1[i] != str2[j]) {
                    leap = 0;
                }
            }
        }
    }
    if (leap == 0) {
        printf ("NO");
    }
    if (leap) {
        printf ("YES");
    }
}

