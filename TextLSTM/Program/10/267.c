main () {
    int a [100], n, i, j, max [100], sum [100], final;
    final = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (i = 0; i < n; i++)
        sum[i] = 0;
    sum[n - 1] = 1;
    max[n - 1] = a[n - 1];
    for (i = n - 2; i >= 0; i--) {
        sum[i] = sum[n - 1];
        max[i] = max[n - 1];
        for (j = n - 1; j > i; j--) {
            if (a[i] >= max[j] && sum[i] <= sum[j] + 1) {
                sum[i] = sum[j] + 1;
                max[i] = a[i];
            }
        }
        if (sum[i] == 1 && a[i] < max[i])
            max[i] = a[i];
    }
    for (i = 0; i < n; i++) {
        if (final <= sum[i])
            final = sum[i];
    }
    printf ("%d", final);
}

