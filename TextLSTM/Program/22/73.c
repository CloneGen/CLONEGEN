main () {
    int a, b [301], i, j, m, d;
    char c;
    scanf ("%d", &b[0]);
    for (i = 1; i < 300; i++) {
        scanf ("%c", &c);
        if (c == ',')
            scanf ("%d", &b[i]);
        else
            break;
    }
    m = b[0];
    for (j = 1; j < i; j++) {
        if (b[j] > m)
            m = b[j];
    }
    d = -1;
    for (j = 0; j < i; j++) {
        if (b[j] > d && b[j] < m)
            d = b[j];
    }
    if (d >= 0)
        printf ("%d", d);
    else
        printf ("No");
}

