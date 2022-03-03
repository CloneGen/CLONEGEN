int main () {
    int n, i, l, a, t, k;
    char s [100000], *p, *q;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i++) {
        gets (s);
        l = strlen (s);
        t = 0;
        for (p = s; p < s + l; p++) {
            a = 1;
            for (q = s; q < s + l; q++) {
                if (p != q && *p == *q) {
                    a = 0;
                    break;
                }
            }
            if (a == 1) {
                t = 1;
                printf ("%c\n", *p);
                break;
            }
        }
        if (t == 0)
            printf ("no\n");
    }
    return 0;
}

