void main () {
    int m, t, i, j;
    char str [100000];
    int a [300];
    str[300] = '\0';
    gets (str);
    m = 0, t = 0;
    for (i = 0; str[i] != '\0'; i = i + 1)
        if (str[i] != ' ')
            m = m + 1;
        else if (m != 0) {
            a[t] = m;
            t = t + 1;
            m = 0;
        }
    for (j = 0; j < t; j = j + 1)
        printf ("%d,", a[j]);
    printf ("%d", m);
}

