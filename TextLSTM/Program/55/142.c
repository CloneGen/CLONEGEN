main () {
    int a, n, b, c [60], d [60], i = 0, j = 0, x, y, z, sum1 = 0, sum2 = 0;
    scanf ("%d ", &a);
    while ((n = getchar ()) != ' ') {
        i++;
        c[i] = n;
    }
    x = i;
    scanf ("%d", &b);
    for (i = 1; i <= x; i++) {
        for (y = 'A'; y <= 'Z'; y++)
            if (c[i] == y) {
                c[i] = c[i] - 7;
                break;
            }
        for (y = 'a'; y <= 'z'; y++)
            if (c[i] == y)
                c[i] = c[i] - 39;
    }
    for (i = 1; i <= x; i++)
        c[i] = c[i] - 48;
    for (i = 1; i <= x; i++) {
        sum1 = sum1 + c[i] * pow (a, x - i);
    }
    if (sum1 == 0)
        printf ("0");
    while (sum1 != 0) {
        j++;
        d[j] = sum1 % b;
        sum1 = sum1 / b;
    }
    z = j;
    for (j = z; j >= 1; j--) {
        if (d[j] >= 10)
            printf ("%c", d[j] + 55);
        else
            printf ("%d", d[j]);
    }
    printf ("\n");
}

