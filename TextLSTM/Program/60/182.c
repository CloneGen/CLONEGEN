main () {
    int i, j, k, n, s, flag = 9;
    scanf ("%d", &n);
    s = 0;
    for (i = 2; i < n - 1; i++) {
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                flag++;
        }
        if (flag == 0) {
            for (j = 2; j <= (i + 2) / 2; j++) {
                if ((i + 2) % j == 0)
                    flag++;
            }
            if (flag == 0) {
                printf ("%d %d\n", i, i + 2);
                s++;
            }
        }
    }
    if (s == 0)
        printf ("empty\n");
}

