int main () {
    int m, n, i, j, k, s, t, sum = 0, a [65535], b [65535];
    scanf ("%d %d", &m, &n);
    for (i = 0; m + i <= n; i++) {
        s = m + i;
        for (j = 0; s != 0; j++) {
            a[j] = s % 10;
            s = s / 10;
        }
        for (k = 0; k * 2 <= j - 1; k++) {
            if (a[k] != a[j - 1 - k]) {
                t = 0;
                break;
            }
            else
                t = 1;
        }
        if (t == 0)
            continue;
        else {
            for (j = 2; j <= sqrt (m + i); j++) {
                if ((m + i) % j == 0) {
                    t = 0;
                    break;
                }
                else
                    t = 1;
            }
            if (t == 1) {
                sum++;
                if (sum == 1)
                    printf ("%d", m + i);
                else
                    printf (",%d", m + i);
            }
        }
    }
    if (sum == 0)
        printf ("no");
    getchar ();
    getchar ();
}

