int main () {
    char a [256], c [256], l [256], g [20], h [20];
    int b, i, e = 0, q, p, j, k;
    gets (a);
    b = strlen (a);
    gets (h);
    gets (g);
    q = strlen (h);
    for (i = 0; i < b; i++) {
        if (a[i] == h[0]) {
            p = 1;
            for (j = 1; j < q; j++) {
                if (a[i + j] != h[j]) {
                    p = 0;
                    break;
                }
            }
            if (p == 1) {
                for (k = 0; k < i; k++) {
                    c[k] = a[k];
                    c[k + 1] = '\0';
                }
                l[0] = -1;
                for (k = i + q; k < b; k++) {
                    l[k - i - q] = a[k];
                    l[k - i - q + 1] = '\0';
                }
                strcat (c, g);
                if (l[0] != -1) {
                    strcat (c, l);
                }
                strcpy (a, c);
                b = strlen (a);
                break;
            }
        }
    }
    printf ("%s", a);
    return 0;
}

