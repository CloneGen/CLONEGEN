main () {
    char ch [300], r [300] = {'\0'};
    int n [300], i, j, N, m;
    gets (ch);
    N = strlen (ch);
    for (i = 0; i <= N -1; i++) {
        for (j = 0; j < i; j++)
            if (ch[i] == r[j] && ch[i] >= 97 && ch[i] <= 122) {
                n[j] = n[j] + 1;
                break;
            }
        if (i == j && ch[i] >= 97 && ch[i] <= 122) {
            r[i] = ch[i];
            n[i] = 1;
        }
    }
    m = 0;
    for (i = 0; i <= N -1; i++)
        if (r[i] != '\0')
            m = m + 1;
    if (m == 0)
        printf ("No");
    else {
        for (j = 97; j <= 122; j++) {
            i = 0;
            while (i <= N -1)
                if (r[i] == j) {
                    printf ("%c=", r[i]);
                    printf ("%d\n", n[i]);
                    i = i + 1;
                }
                else
                    i = i + 1;
        }
    }
}

