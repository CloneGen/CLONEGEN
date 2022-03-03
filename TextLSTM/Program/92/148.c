main () {
    int qw [1000], tj [1000];
    int n, i, j, k, num, temp, win, pt, lose, btmtj, btmqw, toptj, topqw;
    scanf ("%d", &n);
    while (n != 0) {
        n--;
        for (i = 0; i <= n; i++)
            scanf ("%d", &tj[i]);
        for (i = 0; i <= n; i++)
            scanf ("%d", &qw[i]);
        for (i = 0; i <= n; i++)
            for (j = i; j <= n; j++) {
                if (tj[i] > tj[j]) {
                    temp = tj[i];
                    tj[i] = tj[j];
                    tj[j] = temp;
                }
                if (qw[i] > qw[j]) {
                    temp = qw[i];
                    qw[i] = qw[j];
                    qw[j] = temp;
                }
            }
        win = 0;
        num = 0;
        pt = 0;
        lose = 0;
        btmtj = btmqw = 0;
        toptj = topqw = n;
        while ((topqw >= btmqw) && (toptj >= btmtj)) {
            if (qw[btmqw] < tj[btmtj]) {
                btmqw++;
                btmtj++;
                win++;
                continue;
            }
            if (qw[btmqw] > tj[btmtj]) {
                topqw--;
                btmtj++;
                lose++;
                continue;
            }
            if (qw[topqw] < tj[toptj]) {
                topqw--;
                toptj--;
                win++;
                continue;
            }
            if (qw[topqw] >= tj[toptj]) {
                if (qw[topqw] != tj[btmtj])
                    lose++;
                topqw--;
                btmtj++;
                continue;
            }
        }
        n++;
        printf ("%d\n", win * 200 - lose * 200);
        scanf ("%d", &n);
    }
}

