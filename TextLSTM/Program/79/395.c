void main () {
    int n, m;
    int i, j, m1, cur, t;
    int next [10000];
    int b = 0;
    while (1) {
        scanf ("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;
        for (i = 1; i <= n; i++)
            next[i] = i + 1;
        next[n] = 1;
        cur = 1;
        for (i = 1; i <= n - 1; i++) {
            m1 = m % (n - i + 1);
            if (m1 == 0)
                m1 = n - i + 1;
            else if (m1 == 1)
                m1 = n - i + 1 + 1;
            for (j = 0; j < m1 - 2; j++)
                cur = next[cur];
            t = next[next[cur]];
            next[next[cur]] = 0;
            next[cur] = t;
            cur = next[cur];
        }
        if (b)
            printf ("\n");
        printf ("%d", cur);
        b = 1;
    }
}

