int main () {
    int l1, l2, n, a [255] = {0}, b [255], k = 0, f = 0, i, j, x = 0, y = 0;
    char s1 [255], s2 [255];
    scanf ("%s%s", s1, s2);
    l1 = strlen (s1);
    l2 = strlen (s2);
    for (i = 0; i < l1; i++) {
        if (s1[i] != '0')
            y = 1;
    }
    for (i = 0; i < l2; i++) {
        if (s2[i] != '0')
            y = 1;
    }
    if (y == 0) {
        printf ("%d", 0);
        return 0;
    }
    else {
        if (l1 > l2) {
            for (i = 1; i <= l1; i++) {
                if (l2 - i >= 0) {
                    b[l1 - i] = (s1[l1 - i] - 48 + s2[l2 - i] - 48 + a[l1 - i]) % 10;
                    a[l1 - i - 1] = (s1[l1 - i] - 48 + s2[l2 - i] - 48 + a[l1 - i]) / 10;
                }
                else {
                    b[l1 - i] = (s1[l1 - i] - 48 + a[l1 - i]) % 10;
                    a[l1 - i - 1] = (s1[l1 - i] - 48 + a[l1 - i]) / 10;
                }
            }
            if (a[0] != 0) {
                printf ("%d", a[0]);
                x = 1;
            }
            for (i = 0; i < l1; i++) {
                if (b[i] != 0 || x == 1) {
                    printf ("%d", b[i]);
                    x = 1;
                }
            }
            x = 0;
        }
        else if (l1 == l2) {
            for (i = 1; i <= l1; i++) {
                if (l2 - i >= 0) {
                    b[l1 - i] = (s1[l1 - i] - 48 + s2[l2 - i] - 48 + a[l1 - i]) % 10;
                    a[l1 - i - 1] = (s1[l1 - i] - 48 + s2[l2 - i] - 48 + a[l1 - i]) / 10;
                }
                else {
                    b[l1 - i] = (s1[l1 - i] - 48 + a[l1 - i]) % 10;
                    a[l1 - i - 1] = (s1[l1 - i] - 48 + a[l1 - i]) / 10;
                }
            }
            if (a[0] != 0) {
                printf ("%d", a[0]);
                x = 1;
            }
            for (i = 0; i < l1; i++) {
                if (b[i] != 0 || x == 1) {
                    printf ("%d", b[i]);
                    x = 1;
                }
            }
            x = 0;
        }
        else {
            for (i = 1; i <= l2; i++) {
                if (l1 - i >= 0) {
                    b[l2 - i] = (s1[l1 - i] - 48 + s2[l2 - i] - 48 + a[l2 - i]) % 10;
                    a[l2 - i - 1] = (s1[l1 - i] - 48 + s2[l2 - i] - 48 + a[l2 - i]) / 10;
                }
                else {
                    b[l2 - i] = (s2[l2 - i] - 48 + a[l2 - i]) % 10;
                    a[l2 - i - 1] = (s2[l2 - i] - 48 + a[l2 - i]) / 10;
                }
            }
            if (a[0] != 0) {
                printf ("%d", a[0]);
                x = 1;
            }
            for (i = 0; i < l2; i++) {
                if (b[i] != 0 || x == 1) {
                    printf ("%d", b[i]);
                    x = 1;
                }
            }
            x = 0;
        }
    }
    return 0;
}

