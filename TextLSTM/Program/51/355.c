int main () {
    char a [500], b [500] [6], c [6];
    int m [500] = {0}, n, i, j, k, e = 0, f;
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = 0; i <= strlen (a) - n; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = a[i + j];
        }
        b[i][j] = '\0';
    }
    for (i = 0; i <= strlen (a) - n; i++) {
        for (j = 0; j < i; j++) {
            if (strcmp (b[j], b[i]) == 0)
                break;
        }
        if (j == i) {
            for (k = i + 1; k <= strlen (a) - n; k++) {
                if (strcmp (b[k], b[i]) == 0) {
                    m[i] += 1;
                }
            }
        }
    }
    for (i = 0; i <= strlen (a) - n; i++) {
        if (e < m[i]) {
            e = m[i];
        }
    }
    if (e == 0) {
        printf ("NO");
    }
    else {
        printf ("%d\n", e + 1);
        for (i = 0; i <= strlen (a) - n; i++) {
            if (e == m[i]) {
                printf ("%s\n", b[i]);
            }
        }
    }
    return 0;
}

