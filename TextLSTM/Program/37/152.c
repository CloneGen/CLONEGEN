int main () {
    int n, m, i, a, j, b [27], fl;
    char s [1000001], c [27];
    scanf ("%d", &n);
    while (n > 0) {
        scanf ("%s", s);
        a = strlen (s);
        for (i = 0; i < 27; i++)
            b[i] = 1;
        for (i = 0, j = 0; i < a; i++) {
            if (s[i] == '0')
                continue;
            else {
                c[j] = s[i];
                for (m = i + 1; m < a; m++) {
                    if (s[m] == s[i]) {
                        s[m] = '0';
                        b[j]++;
                    }
                }
                j++;
            }
        }
        for (i = 0, fl = 0; i < j; i++) {
            if (b[i] == 1) {
                printf ("%c\n", c[i]);
                fl++;
                break;
            }
        }
        if (fl == 0)
            printf ("no\n");
        n--;
    }
}

