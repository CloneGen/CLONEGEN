void main () {
    int n, p, t [300], i, j, k;
    char c [300], a;
    gets (c);
    n = strlen (c);
    for (i = 0, p = 0; i < n, (a = c[i]) != '\0'; i++) {
        if (a >= 'a' && a <= 'z') {
            for (j = 0, t[i] = 0; j < n; j++)
                if (c[j] == a) {
                    t[i]++;
                }
        }
        else if (a >= 'A' && a <= 'Z') {
            for (j = 0, t[i] = 0; j < n; j++)
                if (c[j] == a) {
                    t[i]++;
                }
        }
        else {
            p++;
            t[i] = 0;
        }
    }
    if (p < n) {
        for (i = 0; i < n; i++) {
            for (j = i; j < n; j++) {
                if (c[i] > c[j]) {
                    a = c[i];
                    k = t[i];
                    c[i] = c[j];
                    t[i] = t[j];
                    c[j] = a;
                    t[j] = k;
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (c[j] == c[i]) {
                    t[j] = 0;
                }
            }
            if (t[i] != 0) {
                printf ("%c=%d\n", c[i], t[i]);
            }
        }
    }
    else
        printf ("No");
}

