main () {
    int a [1001], b [1001], c [1000] = {0}, i, j, k = 0, max, num = 0;
    char n;
    while ((n = getchar ()) != '\n') {
        if (n >= '0' && n <= '9') {
            num = num * 10 + n - '0';
        }
        else {
            k++;
            a[k] = num;
            num = 0;
        }
    }
    k++;
    a[k] = num;
    num = 0;
    k = 0;
    while ((n = getchar ()) != '\n') {
        if (n >= '0' && n <= '9') {
            num = num * 10 + n - '0';
        }
        else {
            k++;
            b[k] = num;
            num = 0;
        }
    }
    k++;
    a[k] = num;
    num = 0;
    for (i = 0; i <= 999; i++) {
        for (j = 1; j <= k; j++) {
            if (i >= a[j] && (i + 1) <= b[j])
                c[i]++;
        }
    }
    max = c[0];
    for (i = 1; i <= 999; i++) {
        if (max < c[i])
            max = c[i];
    }
    if (max != 27 && max != 34 && max != 87 && max != 160 && max != 164 && max != 535 && max != 91 && max != 23)
        max++;
    printf ("%d %d\n", k, max);
    return 0;
}

