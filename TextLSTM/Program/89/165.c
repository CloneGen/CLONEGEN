main () {
    int n, a, b, i, flg = 1;
    int num [MAX];
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        num[i] = 0;
    while (1) {
        scanf ("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        else
            num[b] = num[b] + 1;
    }
    for (i = 0; i < n; i++)
        if (num[i] == n - 1) {
            printf ("%d", i);
            flg = 0;
            break;
        }
    if (flg)
        printf ("NOT FOUND");
}

