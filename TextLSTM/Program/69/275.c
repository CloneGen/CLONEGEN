int main () {
    char a [500], b [500];
    int i, j, k, l1, l2, d, x, c [500], n1, n2;
    scanf ("%s", a);
    scanf ("%s", b);
    l1 = strlen (a);
    l2 = strlen (b);
    if (l1 > l2) {
        for (i = 0; i < l1; i++) {
            c[i] = 0;
        }
        for (i = 1; i <= l2; i++) {
            n1 = l1 - i;
            n2 = l2 - i;
            d = a[n1] - '0';
            x = b[n2] - '0';
            if (d + x + a[n1] < 10) {
                c[n1] = c[n1] + d + x;
            }
            else {
                c[n1 - 1] = c[n1 - 1] + 1;
                c[n1] = c[n1] + d + x - 10;
            }
        }
        for (i = l1 - l2 - 1; i > 0; i--) {
            d = a[i] - '0';
            c[i] = c[i] + d;
            if (c[i] == 10) {
                c[i] = 0;
                c[i - 1] = c[i - 1] + 1;
            }
        }
        d = a[0] - '0';
        x = c[0] - '0';
        if (d + x + a[0] < 10) {
            c[0] = c[0] + d;
            for (j = 0; j < l1; j++) {
                if (c[j] != 0) {
                    k = j;
                    break;
                }
            }
            for (j = k; j < l1; j++) {
                printf ("%d", c[j]);
            }
            printf ("\n");
        }
        else {
            c[0] = 0;
            printf ("1");
            for (j = 0; j < l1; j++) {
                if (c[j] != 0) {
                    k = j;
                    break;
                }
            }
            for (j = k; j < l1; j++) {
                printf ("%d", c[j]);
            }
            printf ("\n");
        }
    }
    if (l1 < l2) {
        for (i = 0; i < l2; i++) {
            c[i] = 0;
        }
        for (i = 1; i <= l1; i++) {
            n1 = l1 - i;
            n2 = l2 - i;
            d = a[n1] - '0';
            x = b[n2] - '0';
            if (d + x + c[n2] < 10) {
                c[n2] = c[n2] + d + x;
            }
            else {
                c[n2 - 1] = c[n2 - 1] + 1;
                c[n2] = c[n2] + d + x - 10;
            }
        }
        for (i = l2 - l1 - 1; i > 0; i--) {
            d = b[i] - '0';
            c[i] = c[i] + d;
            if (c[i] == 10) {
                c[i] = 0;
                c[i - 1] = c[i - 1] + 1;
            }
        }
        d = b[0] - '0';
        x = c[0] - '0';
        if (d + x + c[0] < 10) {
            c[0] = c[0] + d;
            for (j = 0; j < l2; j++) {
                if (c[j] != 0) {
                    k = j;
                    break;
                }
            }
            for (j = k; j < l2; j++) {
                printf ("%d", c[j]);
            }
        }
        else {
            c[0] = 0;
            printf ("1");
            for (j = 0; j < l2; j++) {
                if (c[j] != 0) {
                    k = j;
                    break;
                }
            }
            for (j = k; j < l2; j++) {
                printf ("%d", c[j]);
            }
        }
    }
    if (l1 == l2) {
        for (i = 0; i < l2; i++) {
            c[i] = 0;
        }
        for (i = l1 - 1; i > 0; i--) {
            d = a[i] - '0';
            x = b[i] - '0';
            if (d + x + c[i] < 10) {
                c[i] = c[i] + d + x;
            }
            else {
                c[i - 1] = c[i - 1] + 1;
                c[i] = c[i] + d + x - 10;
            }
        }
        d = a[0] - '0';
        x = b[0] - '0';
        if (d + x + c[0] < 10) {
            c[0] = c[0] + d + x;
            for (j = 0; j < l1; j++) {
                if (c[j] != 0) {
                    k = j;
                    break;
                }
            }
            for (j = k; j < l1; j++) {
                printf ("%d", c[j]);
            }
        }
        else {
            c[0] = c[0] + d + x - 10;
            printf ("1");
            for (j = 0; j < l1; j++) {
                if (c[j] != 0) {
                    k = j;
                    break;
                }
            }
            for (j = k; j < l1; j++) {
                printf ("%d", c[j]);
            }
        }
    }
    return 0;
}

