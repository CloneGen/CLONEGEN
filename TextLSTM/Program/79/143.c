void main () {
    int q [300], w [300], j = 0, e, i, *p, a [500], k, t;
    do {
        scanf ("%d%d", &q[j], &w[j]);
        j++;
    }
    while (q[j - 1] != 0);
    e = j - 1;
    j = 0;
    for (j = 0; j < e; j++) {
        p = a;
        for (i = 0; i < q[j]; i++)
            *(p + i) = i + 1;
        i = 0;
        k = 0;
        t = 0;
        while (t < q[j] - 1) {
            if (*(p + i) != 0)
                k++;
            if (k == w[j]) {
                *(p + i) = 0;
                k = 0;
                t++;
            }
            i++;
            if (i == q[j])
                i = 0;
        }
        while (*p == 0)
            p++;
        printf ("%d\n", *p);
    }
}

