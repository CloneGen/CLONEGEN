main () {
    int i, j, d, b, s;
    int a [10000];
    char c [10000];
    scanf ("%d %s %d", &d, c, &b);
    s = 0;
    if (c[0] - '0' == 0) {
        printf ("0");
    }
    else {
        for (i = 0; c[i] != '\0'; i++) {
            if (c[i] >= 'a' && c[i] <= 'z') {
                c[i] = c[i] - 32;
            }
            if (c[i] >= 65 && c[i] <= 90) {
                a[i] = c[i] - 55;
            }
            else {
                a[i] = c[i] - '0';
            }
        }
        for (j = 0; j < i; j++) {
            s = d * s + a[j];
        }
        for (i = 0; s != 0; i++) {
            a[i] = s % b;
            s = s / b;
            if (a[i] >= 10) {
                c[i] = 'A' + a[i] - 10;
            }
            else {
                c[i] = a[i] + '0';
            }
        }
        for (j = i - 1; j >= 0; j--) {
            printf ("%c", c[j]);
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

