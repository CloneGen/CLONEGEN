void main () {
    char str [300];
    int a [52] = {0};
    int len, i, flag = 0;
    char c = 'A', d = 'a';
    scanf ("%s", str);
    len = strlen (str);
    for (i = 0; i < len; i++) {
        if (str[i] > 64 && str[i] < 91) {
            a[str[i] - 65]++;
        }
        if (str[i] > 96 && str[i] < 123) {
            a[26 + str[i] - 97]++;
        }
    }
    for (i = 0; i < 52; i++) {
        if (i < 26) {
            if (a[i] != 0) {
                c = c + i;
                printf ("%c=%d\n", c, a[i]);
                flag = 1;
                c = 'A';
            }
        }
        else {
            if (a[i] != 0) {
                d = d + i - 26;
                printf ("%c=%d\n", d, a[i]);
                flag = 1;
                d = 'a';
            }
        }
    }
    if (flag == 0)
        printf ("No\n");
}

