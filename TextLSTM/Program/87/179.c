main () {
    int a [100] [10] = {0}, i, s [100] [5] = {0}, x [100] = {0}, num = 1;
    for (i = 1; i <= 6; i++) {
        scanf ("%d", &a[1][i]);
    }
    while (a[num][1] != 0) {
        s[num][1] = a[num][1] * 3600 + a[num][2] * 60 + a[num][3];
        s[num][2] = (a[num][4] + 12) * 3600 + a[num][5] * 60 + a[num][6];
        x[num] = s[num][2] - s[num][1];
        printf ("%d\n", x[num]);
        num = num + 1;
        for (i = 1; i <= 6; i++) {
            scanf ("%d", &a[num][i]);
        }
    }
}

