int cmp (const  void *a, const  void *b) {
    return (*(int*) a - *(int*) b);
}

main () {
    int n, i, j, flag, max, maxnum, money, t [1001], q [1001];
    while (1) {
        scanf ("%d", &n);
        if (!n)
            break;
        for (i = 0; i < n; i++)
            scanf ("%d", &t[i]);
        for (i = 0; i < n; i++)
            scanf ("%d", &q[i]);
        qsort (t, n, sizeof (t [0]), cmp);
        qsort (t, n, sizeof (q [0]), cmp);
        money = 0;
        for (i = 0; i < n; i++) {
            flag = 0;
            max = -100;
            maxnum = -1;
            for (j = 0; j < n; j++) {
                if (q[j] < t[i] && q[j] > max) {
                    max = q[j];
                    maxnum = j;
                    flag = 1;
                }
            }
            if (flag) {
                t[i] = -100;
                q[maxnum] = -100;
                money += 200;
            }
        }
        for (i = 0; i < n; i++) {
            if (t[i] == -100)
                continue;
            for (j = 0; j < n; j++) {
                if (q[j] == -100)
                    continue;
                if (t[i] == q[j]) {
                    t[i] = -100;
                    q[j] = -100;
                    break;
                }
            }
        }
        for (i = 0; i < n; i++) {
            if (q[i] != -100) {
                money -= 200;
            }
        }
        printf ("%d\n", money);
    }
    return 0;
}

