main () {
    int n, i, j, k, a, b, t1, t2, q1, q2, w = 0, l = 0;
    static int t [1005], q [1005];
    do {
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
            scanf ("%d", &t[i]);
        for (i = 1; i <= n; i++)
            scanf ("%d", &q[i]);
        for (i = 1; i < n; i++)
            for (j = i + 1; j <= n; j++)
                if (t[i] < t[j]) {
                    a = t[i];
                    t[i] = t[j];
                    t[j] = a;
                }
        for (i = 1; i < n; i++)
            for (j = i + 1; j <= n; j++)
                if (q[i] < q[j]) {
                    a = q[i];
                    q[i] = q[j];
                    q[j] = a;
                }
        t1 = 1;
        t2 = n;
        q1 = 1;
        q2 = n;
        while (t1 != t2 && q2 != q1) {
            if (t[t1] > q[q1]) {
                w++;
                t1++;
                q1++;
                continue;
            }
            else if (t[t2] > q[q2]) {
                w++;
                t2--;
                q2--;
                continue;
            }
            else if (t[t2] == q[q1]) {
                t2--;
                q1++;
            }
            else if (t[t2] < q[q1]) {
                l++;
                t2--;
                q1++;
            }
        }
        if (t[t1] > q[q1])
            w++;
        if (t[t1] < q[q1])
            l++;
        printf ("%d\n", (w - l) * 200);
        for (i = 1; i <= n; i++) {
            t[i] = 0;
            q[i] = 0;
        }
        w = 0;
        l = 0;
    }
    while (1);
}

