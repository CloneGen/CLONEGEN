main () {
    char a [501], c [26], b [26];
    int i, j, sum = 0;
    gets (a);
    for (i = 0; i < 26; i++)
        b[i] = 'a' + i;
    for (i = 0; i < 26; i++)
        c[i] = 0;
    for (i = 0; i < 26; i++) {
        for (j = 0; a[j] != '\0'; j++) {
            if (b[i] == a[j])
                c[i] = c[i] + 1;
        }
    }
    for (i = 0; a[i] != '\0'; i++)
        sum = sum + c[i];
    if (sum == 0)
        printf ("No");
    else {
        for (i = 0; i < 26; i++) {
            if (c[i] != 0)
                printf ("%c=%d\n", b[i], c[i]);
        }
    }
}

