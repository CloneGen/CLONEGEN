void main () {
    int n;
    scanf ("%d", &n);
    char s [600];
    scanf ("%s", s);
    int m = strlen (s);
    char a [m + 1] [n];
    int b [m + 1];
    int i = 0, j = 0, k = 0, max = 0, l = 0;
    while (i <= m) {
        b[i] = 0;
        i++;
    }
    i = 0;
    if (n == 2) {
        while (i < m - 1) {
            if (i == 0)
                a[i][0] = s[i], a[i][1] = s[i + 1], b[0]++, k++;
            else {
                while (j < i) {
                    if (a[j][0] == s[i] && a[j][1] == s[i + 1])
                        b[j]++, j = i;
                    j++;
                }
            }
            if (j == i && i != 0)
                a[k][0] = s[i], a[k][1] = s[i + 1], b[k]++, k++;
            j = 0;
            i++;
        }
        i = 0;
        while (i < k) {
            if (b[i] > max)
                max = b[i];
            i++;
        }
        i = 0;
        while (i < k) {
            if (b[i] == max)
                l++;
            i++;
        }
        if (max == 1)
            printf ("NO");
        else {
            printf ("%d\n", max);
            i = 0;
            while (i < k) {
                if (b[i] == max)
                    printf ("%c%c\n", a[i][0], a[i][1]);
                i++;
            }
        }
    }
    if (n == 3) {
        while (i < m - 2) {
            if (i == 0)
                a[i][0] = s[i], a[i][1] = s[i + 1], a[i][2] = s[i + 2], b[0]++, k++;
            else {
                while (j < i) {
                    if (a[j][0] == s[i] && a[j][1] == s[i + 1] && a[j][2] == s[i + 2])
                        b[j]++, j = i;
                    j++;
                }
            }
            if (j == i && i != 0)
                a[k][0] = s[i], a[k][1] = s[i + 1], a[k][2] = s[i + 2], b[k]++, k++;
            j = 0;
            i++;
        }
        i = 0;
        while (i < k) {
            if (b[i] > max)
                max = b[i];
            i++;
        }
        i = 0;
        while (i < k) {
            if (b[i] == max)
                l++;
            i++;
        }
        if (max == 1)
            printf ("NO");
        else {
            printf ("%d\n", max);
            i = 0;
            while (i < k) {
                if (b[i] == max)
                    printf ("%c%c%c\n", a[i][0], a[i][1], a[i][2]);
                i++;
            }
        }
    }
    if (n == 4) {
        while (i < m - 3) {
            if (i == 0)
                a[i][0] = s[i], a[i][1] = s[i + 1], a[i][2] = s[i + 2], a[i][3] = s[i + 3], b[0]++, k++;
            else {
                while (j < i) {
                    if (a[j][0] == s[i] && a[j][1] == s[i + 1] && a[j][2] == s[i + 2] && a[j][3] == s[i + 3])
                        b[j]++, j = i;
                    j++;
                }
            }
            if (j == i && i != 0)
                a[k][0] = s[i], a[k][1] = s[i + 1], a[k][2] = s[i + 2], a[k][3] = s[i + 3], b[k]++, k++;
            j = 0;
            i++;
        }
        i = 0;
        while (i < k) {
            if (b[i] > max)
                max = b[i];
            i++;
        }
        i = 0;
        while (i < k) {
            if (b[i] == max)
                l++;
            i++;
        }
        if (max == 1)
            printf ("NO");
        else {
            printf ("%d\n", max);
            i = 0;
            while (i < k) {
                if (b[i] == max)
                    printf ("%c%c%c%c\n", a[i][0], a[i][1], a[i][2], a[i][3]);
                i++;
            }
        }
    }
}

