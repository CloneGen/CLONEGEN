int main () {
    char s [500];
    int n, i, j, t, k;
    scanf ("%s", s);
    n = strlen (s);
    if (n % 2 == 0) {
        for (i = 1; i <= (n / 2); i++) {
            for (j = 0; j < (n - 2 * i + 1); j++) {
                t = 0;
                for (k = 0; k < i; k++) {
                    if (s[j + k] == s[j + 2 * i - 1 - k])
                        t = t + 1;
                }
                if (t == i) {
                    for (k = j; k < j + 2 * i; k++) {
                        printf ("%c", s[k]);
                    }
                    printf ("\n");
                }
            }
        }
        for (i = 1; i < ((n - 1) / 2); i++) {
            for (j = 0; j < (n - 2 * i + 1 + 1); j++) {
                t = 0;
                for (k = 0; k < ((2 * i + 1 - 1) / 2); k++) {
                    if (s[j + k] == s[j + 2 * i + 1 - 1 - k])
                        t = t + 1;
                }
                if (t == ((2 * i + 1 - 1) / 2)) {
                    for (k = j; k < j + 2 * i + 1; k++) {
                        printf ("%c", s[k]);
                    }
                    printf ("\n");
                }
            }
        }
    }
    else {
        for (i = 1; i < (n / 2); i++) {
            for (j = 0; j < (n - 2 * i + 1); j++) {
                t = 0;
                for (k = 0; k < i; k++) {
                    if (s[j + k] == s[j + 2 * i - 1 - k])
                        t = t + 1;
                }
                if (t == i) {
                    for (k = j; k < j + 2 * i; k++) {
                        printf ("%c", s[k]);
                    }
                    printf ("\n");
                }
            }
        }
        for (i = 1; i <= ((n + 1) / 2); i++) {
            for (j = 0; j < (n - 2 * i + 1 + 1); j++) {
                t = 0;
                for (k = 0; k < ((2 * i + 1 - 1) / 2); k++) {
                    if (s[j + k] == s[j + 2 * i + 1 - 1 - k])
                        t = t + 1;
                }
                if (t == ((2 * i + 1 - 1) / 2)) {
                    for (k = j; k < j + 2 * i + 1; k++) {
                        printf ("%c", s[k]);
                    }
                    printf ("\n");
                }
            }
        }
    }
    return 0;
}

