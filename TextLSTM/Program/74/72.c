int main () {
    long a, b [10000] = {0}, c [10000], i, j, k = 1, flag = 0, l = 1, m, n, t;
    scanf ("%ld%ld", &m, &n);
    for (i = m; i <= n; i++) {
        for (j = 2; j < i; j++)
            if (i % j == 0)
                break;
        if (j == i) {
            b[k] = i;
            k++;
            flag++;
        }
    }
    k--;
    for (i = 1; i <= k; i++) {
        t = b[i];
        a = 0;
        while (t != 0) {
            a = 10 * a + t % 10;
            t = t / 10;
        }
        if (a == b[i]) {
            c[l] = b[i];
            l++;
        }
    }
    if (flag == 0)
        printf ("no");
    else {
        if (l == 1)
            printf ("no");
        else {
            for (i = 1; i < l - 1; i++)
                printf ("%ld,", c[i]);
            printf ("%ld", c[l - 1]);
        }
    }
    return 0;
}

