main () {
    char c [100];
    int answer [100];
    int a, j = 1, i = 0, p, q, m, l;
    scanf ("%s", &c);
    a = strlen (c);
    if (a == 1) {
        printf ("0\n");
        printf ("%d", c[0] - '0');
    }
    else {
        while (j < a) {
            if (j == 1)
                p = c[j - 1] - '0';
            q = c[j] - '0';
            m = 10 * p + q;
            if (m <= 12 && j == 1 && a <= 2) {
                printf ("0\n");
                printf ("%d", m);
                break;
            }
            else {
                if (m <= 12 && a > 2 && j == 1) {
                    m = 100 * p + q * 10 + (c[j + 1] - '0');
                    j = j + 1;
                }
                answer[i] = m / 13;
                p = m % 13;
                i = i + 1;
            }
            j = j + 1;
        }
        for (l = 0; l < i; l++)
            printf ("%d", answer[l]);
        if (a != 2 || (a == 2 && i != 0))
            printf ("\n%d", p);
    }
}

