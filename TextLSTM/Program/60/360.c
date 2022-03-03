void main () {
    int n, i, l = 0;
    int sushu (int);
    scanf ("%d", &n);
    for (i = 3; i <= n - 2; i += 2) {
        if (sushu (i) && sushu (i + 2)) {
            l++;
            printf ("%d %d\n", i, i + 2);
        }
    }
    if (l == 0)
        printf ("empty\n");
}

int sushu (int k) {
    int p, j, s = 0;
    p = sqrt (k);
    for (j = 1; j <= p; j += 2)
        if (k % j == 0)
            s++;
    if (s == 1)
        return 1;
    else
        return 0;
}

