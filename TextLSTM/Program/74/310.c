int prime (int x) {
    int i, k;
    k = sqrt (x);
    if (x == 2 || x == 3)
        return (1);
    for (i = 2; i <= k; i++)
        if (x % i == 0)
            break;
    if (i > 1 && i <= k)
        return (0);
    else
        return (1);
}

int palin (int x) {
    int t, k;
    t = x;
    k = 0;
    while (t > 0) {
        k = k * 10 + t % 10;
        t = t / 10;
    }
    if (k == x)
        return (1);
    else
        return (0);
}

main () {
    int m, n, i, resu [100], num;
    scanf ("%d%d", &m, &n);
    num = 0;
    for (i = m; i <= n; i++)
        if (prime (i) == 1 && palin (i) == 1) {
            resu[num] = i;
            num++;
        }
    if (num == 0)
        printf ("no");
    for (i = 0; i <= num - 1; i++) {
        printf ("%d", resu[i]);
        if (i <= num - 2)
            putchar (',');
    }
}

