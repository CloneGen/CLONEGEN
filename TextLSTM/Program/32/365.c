void main () {
    char a [101], b [101];
    int n, c, d, p, i, j = 0, t;
    scanf ("%d", &n);
    for (p = 1; p <= n; p++) {
        scanf ("%s%s", a, b);
        c = strlen (a);
        d = strlen (b);
        for (i = 1; i <= d; i++) {
            if (b[d - i] <= a[c - i])
                a[c - i] = a[c - i] - b[d - i] + 48;
            else {
                a[c - i] = a[c - i] - b[d - i] + 58;
                if (a[c - 1 - i] > 48)
                    a[c - 1 - i]--;
                else {
                    t = i;
                    while (a[c - 1 - t] == 48) {
                        a[c - 1 - t] = 9 + 48;
                        t++;
                    }
                    a[c - 1 - t]--;
                }
            }
        }
        while (a[j] == 48)
            j++;
        for (; j < c; j++)
            printf ("%c", a[j]);
        j = 0;
        printf ("\n");
    }
}

