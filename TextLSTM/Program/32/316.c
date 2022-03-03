void jf (char *a, int n, char *b, int m) {
    int i, j, k;
    for (i = m - 1, j = n - 1; i >= 1; i--, j--) {
        if (a[j] >= b[i])
            a[j] = a[j] - b[i] + '0';
        else {
            a[j] = a[j] - b[i] + 10 + '0';
            a[j - 1]--;
        }
    }
    if (n == m) {
        a[0] = a[0] - b[0] + '0';
        for (i = 0; i < n; i++)
            printf ("%c", a[i]);
    }
    else {
        if (a[n - m] >= b[0])
            a[n - m] = a[n - m] - b[0] + '0';
        else {
            a[n - m] = a[n - m] - b[0] + 10 + '0';
            a[n - m - 1]--;
            for (k = n - m - 1; k >= 0; k--) {
                if (a[k] >= '0')
                    break;
                else {
                    a[k] = 9 + '0';
                    a[k - 1]--;
                }
            }
        }
        for (i = 0; i < n; i++)
            printf ("%c", a[i]);
    }
}

int main () {
    int n, i;
    scanf ("%d", &n);
    char **pp;
    pp = (char **) malloc (n * sizeof (char *));
    for (i = 0; i < n; i++)
        pp[i] = (char *) malloc (101 * sizeof (char));
    char **qq;
    qq = (char **) malloc (n * sizeof (char *));
    for (i = 0; i < n; i++)
        qq[i] = (char *) malloc (101 * sizeof (char));
    for (i = 0; i < n - 1; i++) {
        scanf ("%s", pp[i]);
        scanf ("%s", qq[i]);
        printf ("\n");
    }
    scanf ("%s", pp[n - 1]);
    scanf ("%s", qq[n - 1]);
    int *p, *q;
    p = (int *) malloc (n * sizeof (int));
    q = (int *) malloc (n * sizeof (int));
    for (i = 0; i < n; i++) {
        p[i] = strlen (pp[i]);
        q[i] = strlen (qq[i]);
    }
    for (i = 0; i < n; i++) {
        jf (pp[i], p[i], qq[i], q[i]);
        printf ("\n");
    }
    for (i = 0; i < n; i++)
        free (pp[i]);
    free (pp);
    for (i = 0; i < n; i++)
        free (qq[i]);
    free (qq);
    free (p);
    free (q);
}

