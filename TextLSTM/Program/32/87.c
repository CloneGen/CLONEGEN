void main () {
    int n, z, p, q, i, j, s, h;
    char a [100], b [100];
    scanf ("%d", &n);
    for (z = 0; z < n; z++) {
        scanf ("%s\n%s", a, b);
        p = strlen (a);
        q = strlen (b);
        for (i = p - 1, j = q - 1; i >= 0; i--, j--) {
            if (j >= 0) {
                if (*(a + i) >= *(b + j))
                    *(a + i) = *(a + i) - *(b + j) + 48;
                else {
                    *(a + i) = *(a + i) - *(b + j) + 58;
                    *(a + i - 1) = *(a + i - 1) - 1;
                }
            }
            else {
                if (*(a + i) < '0') {
                    *(a + i) = *(a + i) + 10 + 48;
                    *(a + i - 1) = *(a + i - 1) - 1;
                }
                else
                    break;
            }
        }
        for (s = 0; s < p; s++) {
            if (*(a + s) != '0') {
                for (h = s; h < p; h++)
                    printf ("%d", *(a + h) - 48);
                break;
            }
        }
        printf ("\n");
    }
}

