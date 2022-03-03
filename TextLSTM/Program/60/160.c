main () {
    int n, count = 0;
    scanf ("%d", &n);
    int prime [100000] = {0};
    prime[0] = 2;
    int i, j, k;
    j = 1;
    for (i = 3; i <= n; i++) {
        for (k = 0; prime[k] * prime[k] <= i; k++) {
            if (i % prime[k] == 0)
                break;
        }
        if (prime[k] * prime[k] > i) {
            prime[j] = i;
            j++;
        }
    }
    for (i = 0; i < 100000; i++) {
        if (prime[i + 1] - prime[i] == 2) {
            printf ("%d %d\n", prime[i], prime[i + 1]);
            count++;
        }
    }
    if (count == 0)
        printf ("empty");
}

