void main () {
    int a [400] = {0};
    int m, n, i, out, sum;
    while (1) {
        scanf ("%d %d", &n, &m);
        if (m == 0 && n == 0)
            break;
        out = m;
        sum = n;
        for (i = 1; i <= n; i++)
            a[i] = 1;
        for (i = 1; sum > 1;) {
            if (a[i] == 0) {
                i++;
                if (i > n)
                    i = 1;
                continue;
            }
            else
                out--;
            if (out == 0) {
                a[i] = 0;
                sum--;
                out = m;
            }
            i++;
            if (i > n)
                i = 1;
        }
        for (i = 1; i <= n; i++)
            if (a[i] == 1)
                break;
        printf ("%d\n", i);
    }
}

