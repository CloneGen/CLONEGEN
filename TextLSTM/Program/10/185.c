int result [40];

int max (int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

void f (int a [], int n) {
    int i, j, maxmium;
    result[1] = 1;
    for (i = 2; i <= n; i++) {
        maxmium = 0;
        for (j = 1; j < i; j++) {
            if (a[j] >= a[i])
                maxmium = max (result[j], maxmium);
        }
        result[i] = 1 + maxmium;
    }
}

main () {
    int n, i, outcome = 0;
    scanf ("%d", &n);
    int a [40];
    for (i = 1; i <= n; i++) {
        scanf ("%d", &a[i]);
    }
    f (a, n);
    for (i = 1; i <= n; i++)
        outcome = max (outcome, result[i]);
    printf ("%d\n", outcome);
}

