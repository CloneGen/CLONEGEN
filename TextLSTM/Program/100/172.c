main () {
    char str1 [305];
    int i, j, p = 0, n;
    int a [52] = {0};
    scanf ("%s", str1);
    n = strlen (str1);
    for (i = 0; i <= n - 1; i++) {
        for (j = 'A'; j <= 'Z'; j++) {
            if (str1[i] == j) {
                a[j - 'A'] = a[j - 'A'] + 1;
                p++;
            }
        }
    }
    for (i = 0; i <= n - 1; i++) {
        for (j = 'a'; j <= 'z'; j++) {
            if (str1[i] == j) {
                a[j + 26 - 'a']++;
                p++;
            }
        }
    }
    for (i = 0; i <= 51; i++) {
        if (p == 0) {
            printf ("No\n");
            break;
        }
        else {
            if (a[i] != 0 && i <= 25 && i >= 0) {
                printf ("%c=%d\n", i + 'A', a[i]);
            }
            else {
                if (a[i] != 0 && i <= 51 && i >= 26) {
                    printf ("%c=%d\n", (i - 26 + 'a'), a[i]);
                }
                else {
                    if (a[i] == 0) {
                        continue;
                    }
                }
            }
        }
    }
}

