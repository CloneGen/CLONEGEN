main () {
    int k, i, max = 0, u, j, a [26] = {0}, b [26] = {1};
    scanf ("%d", &k);
    for (i = 1; i <= k; i++)
        scanf ("%d", &a[i]);
    for (i = 1; i <= k; i++)
        b[i] = 1;
    for (i = k - 1; i >= 1; i--)
        for (j = i + 1; j <= k; j++) {
            if (a[j] <= a[i] && b[i] < b[j] + 1)
                b[i] = b[j] + 1;
            u = b[i];
        }
    for (i = 1; i <= k; i++)
        max = (max >= b[i]) ? max : b[i];
    printf ("%d", max);
}

