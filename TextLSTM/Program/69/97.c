int main () {
    char a [300], b [300], c [300], x;
    int n1, n2, m, i, t = -1, z = 0;
    scanf ("%s%s", a, b);
    n1 = strlen (a);
    n2 = strlen (b);
    if (n1 <= n2) {
        m = n2;
        for (i = 1; i <= n1; i++) {
            x = a[n1 - i] + b[n2 - i] - 48 + z;
            if (x > 57) {
                c[m - i] = x - 10;
                z = 1;
            }
            else {
                c[m - i] = x;
                z = 0;
            }
        }
        for (i = n1 + 1; i <= n2; i++) {
            x = b[n2 - i] + z;
            if (x > 57) {
                c[m - i] = x - 10;
                z = 1;
            }
            else {
                c[m - i] = x;
                z = 0;
            }
        }
        c[m] = '\0';
    }
    else {
        m = n1;
        for (i = 1; i <= n2; i++) {
            x = a[n1 - i] + b[n2 - i] - 48 + z;
            if (x > 57) {
                c[m - i] = x - 10;
                z = 1;
            }
            else {
                c[m - i] = x;
                z = 0;
            }
        }
        for (i = n2 + 1; i <= n1; i++) {
            x = a[n1 - i] + z;
            if (x > 57) {
                c[m - i] = x - 10;
                z = 1;
            }
            else {
                c[m - i] = x;
                z = 0;
            }
        }
        c[m] = '\0';
    }
    if (z == 1) {
        printf ("1");
        printf ("%s\n", c);
    }
    else {
        for (i = 0; i < m; i++) {
            if (c[i] != '0') {
                t = i;
                break;
            }
        }
        if (t != -1) {
            for (i = t; i < m; i++)
                printf ("%c", c[i]);
            printf ("\n");
        }
        else
            printf ("0\n");
    }
    return 0;
}

