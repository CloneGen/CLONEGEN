main () {
    int m, n, t, k, i, x1, x2, a [251];
    t = 0;
    m = 0;
    n = 0;
    char str1 [250], str2 [250];
    for (i = 0; i < 250; i++)
        a[i] = 0;
    scanf ("%s", str1);
    scanf ("%s", str2);
    x1 = strlen (str1);
    x2 = strlen (str2);
    if (x1 > x2) {
        for (i = (x1 - x2 - 1); i >= 0; i--)
            a[i] = a[i] + str1[i] - '0';
        for (i = x1 - 1; i >= (x1 - x2); i--) {
            a[i] = a[i] + str1[i] + str2[i + x2 - x1] - '0' - '0';
            if (a[i] >= 10)
                for (k = i; k >= 1; k--) {
                    a[k - 1] = a[k - 1] + 1;
                    a[k] = a[k] % 10;
                    if (a[k - 1] < 10)
                        break;
                }
        }
        for (i = 0; i <= x1 - 1; i++) {
            if (a[i] != 0 || a[i] == 0 && t != 0) {
                printf ("%d", a[i]);
                t = 1;
            }
            if (i == 1 && t == 0)
                printf ("0");
        }
    }
    else if (x1 < x2) {
        for (i = (x2 - x1 - 1); i >= 0; i--)
            a[i] = a[i] + str2[i] - '0';
        for (i = x2 - 1; i >= (x2 - x1); i--) {
            a[i] = a[i] + str1[i + x1 - x2] + str2[i] - '0' - '0';
            if (a[i] >= 10)
                for (k = i; k >= 1; k--) {
                    a[k - 1] = a[k - 1] + 1;
                    a[k] = a[k] % 10;
                    if (a[k - 1] < 10)
                        break;
                }
        }
        for (i = 0; i < x2; i++) {
            if (a[i] != 0 || a[i] == 0 && m != 0) {
                printf ("%d", a[i]);
                m = 1;
            }
            if (i == 1 && m == 0)
                printf ("0");
        }
    }
    else {
        for (i = x1 - 1; i >= 0; i--) {
            a[x1 - i - 1] = a[x1 - i - 1] + str1[i] + str2[i] - '0' - '0';
            if (a[x1 - 1 - i] >= 10) {
                a[x1 - i]++;
                a[x1 - 1 - i] = a[x1 - 1 - i] % 10;
            }
        }
        if (a[x1] != 0)
            for (i = x1; i >= 0; i--)
                printf ("%d", a[i]);
        else
            for (i = x1 - 1; i >= 0; i--) {
                if (a[i] != 0 || a[i] == 0 && n != 0) {
                    printf ("%d", a[i]);
                    n = 1;
                }
                if (i == 0 && n == 0)
                    printf ("0");
            }
    }
}

