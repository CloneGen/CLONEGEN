void main () {
    char str1 [5000];
    int a [1000] = {0}, n, i, j = 0, m = 0, b, max, t, c;
    scanf ("%s", str1);
    n = strlen (str1);
    str1[n] = 'i';
    n = n + 1;
    b = 0;
    for (j = 0; j <= 99; j++) {
        for (i = b; i <= n - 1; i++) {
            if (str1[i] >= '0' && str1[i] <= '9')
                a[j] = a[j] * 10 + str1[i] - 48;
            else {
                b = i + 1;
                break;
            }
        }
        if (i == n - 1)
            break;
    }
    for (i = 0; i <= 99; i++) {
        if (a[i] != 0)
            m = m + 1;
    }
    if (m == 1)
        printf ("No");
    else {
        max = a[0];
        for (i = 0; i <= 999; i++) {
            if (a[i] > max) {
                max = a[i];
                t = i;
            }
        }
        for (i = 0; i <= 999; i++) {
            if (max == a[i])
                a[i] = 0;
        }
        for (i = 0; i <= 999; i++) {
            if (a[i] != 0)
                break;
            if (i == 999)
                c = 1;
        }
        if (c == 1)
            printf ("No");
        else {
            a[t] = 0;
            max = a[0];
            for (i = 0; i <= 999; i++) {
                if (a[i] > max) {
                    max = a[i];
                    t = i;
                }
            }
            printf ("%d", max);
        }
    }
}

