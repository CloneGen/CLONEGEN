int main () {
    int n, k, i, p, q, x;
    int a [1000];
    x = -1;
    scanf ("%d %d", &n, &k);
    scanf ("%d", &a[1]);
    for (i = 2; i <= n; i++) {
        scanf (" %d", &a[i]);
    }
    for (p = 1; p <= n - 1; p++) {
        for (q = p + 1; q <= n; q++) {
            if (a[p] + a[q] == k)
                x = 1;
        }
        if (x == 1)
            break;
    }
    if (x == -1)
        printf ("no");
    else
        printf ("yes");
    return 0;
}

