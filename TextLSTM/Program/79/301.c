void main () {
    int n [100], m [100], p = 1, i, j, k = 0, s, t;
    int a [300];
    do {
        scanf ("%d%d", &n[p], &m[p]);
        p++;
    }
    while (n[p - 1] != 0 && m[p - 1] != 0);
    for (i = 1; i < p - 1; i++) {
        j = 0;
        for (t = 1; t <= n[i]; t++)
            a[t] = 1;
        s = n[i];
        for (j++; j <= n[i]; j++) {
            if (s == 1)
                break;
            k = a[j] + k;
            if (k == m[i]) {
                s = s - 1;
                k = 0;
                a[j] = 0;
                if (j == n[i])
                    j = 0;
                if (s > 1)
                    continue;
                else
                    break;
            }
            if (j == n[i])
                j = 0;
        }
        for (j = 1; a[j] == 0;)
            j++;
        printf ("%d\n", j);
    }
}

