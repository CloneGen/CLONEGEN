main () {
    int i, j, n = 1, a [1010], b [1010], min = 1000, max = 0, put [1010] = {0}, last = 1;
    char c;
    scanf ("%d", &a[1]);
    while ((c = getchar ()) != '\n') {
        n++;
        scanf ("%d", &a[n]);
    }
    scanf ("%d", &b[1]);
    n = 1;
    while ((c = getchar ()) != '\n') {
        n++;
        scanf ("%d", &b[n]);
    }
    for (i = 1; i <= n; i++) {
        if (a[i] < min)
            min = a[i];
        if (b[i] > max)
            max = b[i];
    }
    for (i = min; i < max; i++) {
        for (j = 1; j <= n; j++) {
            if (a[j] <= i && b[j] > i) {
                put[i]++;
            }
        }
    }
    for (i = min; i < max; i++) {
        if (last < put[i]) {
            last = put[i];
        }
    }
    printf ("%d %d", n, last);
}

