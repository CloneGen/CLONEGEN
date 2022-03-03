void main () {
    int g (int m, int s, int t);
    void f (int a [], int k, int t);
    int a [301] = {0}, b [301] = {0}, c [100] [2] = {0}, m, n, t, k, j, i = 0;
    do {
        scanf ("%d %d", &c[i][0], &c[i][1]);
        i++;
    }
    while (c[i - 1][0] != 0);
    k = i - 1;
    for (j = 1; j <= k; j++) {
        n = c[j - 1][0];
        m = c[j - 1][1];
        for (i = 0; i < 300; i++) {
            a[i] = 0;
            b[i] = 0;
        }
        for (i = 0; i <= n - 1; i++) {
            a[i] = i + 1;
        }
        t = n;
        i = 0;
        while (a[1] != 0) {
            f (a, g (m, b[i], t), t);
            i++;
            if (g (m, b[i - 1], t) == (t - 1))
                b[i] = 0;
            else
                b[i] = g (m, b[i - 1], t);
            t--;
        }
        if (j < k)
            printf ("%d\n", a[0]);
        else
            printf ("%d", a[0]);
    }
}

int g (int m, int s, int t) {
    int c;
    if ((s + m) % t == 0)
        c = t - 1;
    else
        c = (s + m) % t - 1;
    return c;
}

void f (int a [], int k, int t) {
    int i;
    for (i = k; i <= t; i++) {
        a[i] = a[i + 1];
    }
}

