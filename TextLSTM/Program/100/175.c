void main () {
    char c [500];
    int a [26] = {0};
    unsigned int i, j;
    gets (c);
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'a')
            a[0]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'b')
            a[1]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'c')
            a[2]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'd')
            a[3]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'e')
            a[4]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'f')
            a[5]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'g')
            a[6]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'h')
            a[7]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'i')
            a[8]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'j')
            a[9]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'k')
            a[10]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'l')
            a[11]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'm')
            a[12]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'n')
            a[13]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'o')
            a[14]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'p')
            a[15]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'q')
            a[16]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'r')
            a[17]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 's')
            a[18]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 't')
            a[19]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'u')
            a[20]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'v')
            a[21]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'w')
            a[22]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'x')
            a[23]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'y')
            a[24]++;
    }
    for (i = 0; i < strlen (c); i++) {
        if (c[i] == 'z')
            a[25]++;
    }
    for (i = 0; i < 26; i++) {
        if (a[i] != 0)
            printf ("%c=%d\n", i + 97, a[i]);
    }
    j = 0;
    for (i = 0; i < 26; i++) {
        if (a[i] != 0)
            j = 1;
    }
    if (j == 0)
        printf ("No");
}

