void main () {
    char a [251], b [251], c [251], d [251];
    int i, t = 0, m, n, l1, l2, x, j;
    scanf ("%s %s", a, b);
    m = strlen (a);
    n = strlen (b);
    i = 0;
    while (a[i] == '0')
        i++;
    l1 = m - i;
    j = 0;
    while (b[j] == '0')
        j++;
    l2 = n - j;
    if (l1 >= l2) {
        for (i = 1; i <= l1; i++) {
            if (i <= l2) {
                x = a[m - i] + b[n - i] - 96 + t;
                c[l1 - i] = x % 10 + 48;
                if (x >= 10)
                    t = 1;
                else
                    t = 0;
            }
            else {
                x = a[m - i] - 48 + t;
                c[l1 - i] = x % 10 + 48;
                if (x >= 10)
                    t = 1;
                else
                    t = 0;
            }
        }
        c[l1] = '\0';
        if (t == 1) {
            d[0] = 49;
            d[1] = '\0';
            strcat (d, c);
        }
        else {
            d[0] = '\0';
            strcat (d, c);
        }
        printf ("%s", d);
    }
    else {
        for (i = 1; i <= l2; i++) {
            if (i <= l1) {
                x = a[m - i] + b[n - i] - 96 + t;
                c[l2 - i] = x % 10 + 48;
                if (x >= 10)
                    t = 1;
                else
                    t = 0;
            }
            else {
                x = b[n - i] - 48 + t;
                c[l2 - i] = x % 10 + 48;
                if (x >= 10)
                    t = 1;
                else
                    t = 0;
            }
        }
        c[l2] = '\0';
        if (t == 1) {
            d[0] = 49;
            d[1] = '\0';
            strcat (d, c);
        }
        else {
            d[0] = '\0';
            strcat (d, c);
        }
        printf ("%s", d);
    }
    if (l1 == 0 && l2 == 0)
        printf ("0");
}

