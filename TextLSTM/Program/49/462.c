int main () {
    char a [505], b [505], c [505];
    int i, j, len, k, e = 0;
    scanf ("%s", a);
    len = strlen (a);
    for (i = 2; i <= len; i++) {
        for (j = 0; j <= len - i; j++) {
            for (k = j; k <= j + i - 1; k++) {
                b[k - j] = a[k];
            }
            b[k - j] = '\0';
            for (k = 0; k < i; k++) {
                c[i - 1 - k] = b[k];
            }
            c[i] = '\0';
            if (strcmp (c, b) == 0)
                printf ("%s\n", b);
        }
    }
    return 0;
}

