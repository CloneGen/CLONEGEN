main () {
    int i, j, k, l, a [26], len [26];
    scanf ("%d", &k);
    for (i = 0; i < k; ++i)
        scanf ("%d", &a[i]);
    for (i = 0; i < k; ++i)
        len[i] = 1;
    for (i = 1; i < k; ++i) {
        for (j = 0; j < i; ++j)
            if (a[i] <= a[j]) {
                len[i] = len[j] + 1;
                break;
            }
        for (l = j + 1; l < i; ++l)
            if (len[l] >= len[i] && a[i] <= a[l]) {
                len[i] = len[l] + 1;
                continue;
            }
    }
    for (i = 0; i < k; ++i)
        if (len[i] > len[0])
            len[0] = len[i];
    printf ("%d", len[0]);
}

