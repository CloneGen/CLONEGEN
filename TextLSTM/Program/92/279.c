void main () {
    int n, i, a [1001], b [1001], temp, t, min, x, y = 0, sum = 0, j, tt, af, as, bf, bs;
    scanf ("%d", &n);
    while (n) {
        y = 0;
        sum = 0;
        for (i = 0; i < 1000; i++) {
            a[i] = 0;
            b[i] = 0;
        }
        for (i = 0; i < n; i++)
            scanf ("%d", &a[i]);
        for (i = 0; i < n; i++)
            scanf ("%d", &b[i]);
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - 1 - i; j++)
                if (a[j] < a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - 1 - i; j++)
                if (b[j] < b[j + 1]) {
                    temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
        as = n - 1;
        bs = n - 1;
        af = 0;
        bf = 0;
        for (i = n - 1; i >= af; i--) {
            if (a[i] > b[bs]) {
                as--;
                bs--;
                sum += 200;
            }
            else if (a[i] < b[bs]) {
                as--;
                bf++;
                sum -= 200;
            }
            else {
                while (a[af] > b[bf]) {
                    af++;
                    bf++;
                    sum += 200;
                }
                if (a[af] < b[bf]) {
                    as--;
                    bf++;
                    sum -= 200;
                }
                else if (i > af) {
                    if (a[i] < b[bf])
                        sum -= 200;
                    as--;
                    bf++;
                }
            }
        }
        printf ("%d\n", sum);
        scanf ("%d", &n);
    }
}

