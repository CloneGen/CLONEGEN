int main () {
    char s [101];
    int a [101] = {0}, b [101] = {0}, n, i, j, k, t, m, x;
    scanf ("%s", s);
    k = strlen (s);
    for (i = 0; i < k; i++) {
        a[i] = s[i] - 48;
    }
    if (k == 1) {
        printf ("%d\n", 0);
        printf ("%d\n", a[0]);
    }
    else if (k == 2) {
        if ((a[1] + a[0] * 10) >= 13) {
            printf ("%d\n", (a[0] * 10 + a[1]) / 13);
            printf ("%d\n", (a[1] + a[0] * 10) % 13);
        }
        else {
            printf ("%d\n", 0);
            printf ("%d\n", a[0] * 10 + a[1]);
        }
    }
    else {
        t = 0;
        for (i = 0, m = 0; i < k; i++) {
            b[m] = (t * 10 + a[i]) / 13;
            t = (t * 10 + a[i]) % 13;
            m++;
        }
        for (i = 0; i < n; i++) {
            if (b[i] == 0 && b[i + 1] != 0) {
                x = i;
                break;
            }
        }
        for (j = x + 1; j < m; j++) {
            printf ("%d", b[j]);
        }
        printf ("\n");
        printf ("%d\n", t);
    }
}

