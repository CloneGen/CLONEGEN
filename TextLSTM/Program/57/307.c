int main () {
    int n, k, i, j, len;
    char ci [50] [50];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", ci[i]);
    }
    char *ps;
    for (j = 0; j < n; j++) {
        ps = ci[j] - 1 + strlen (ci[j]);
        k = strcmp (ps, "g");
        if (k != 0) {
            len = strlen (ci[j]);
            ci[j][len - 2] = '\0';
        }
        else if (k == 0) {
            len = strlen (ci[j]);
            ci[j][len - 3] = '\0';
        }
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", ci[i]);
    }
    return 0;
}

