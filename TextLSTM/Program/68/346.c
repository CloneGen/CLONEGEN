int main () {
    int n, i, j;
    unsigned int *isprimebits;
    scanf ("%d", &n);
    isprimebits = (unsigned int *) malloc ((IDX (n) +1) * sizeof (unsigned int));
    memset (isprimebits, -1, (IDX (n) +1) * sizeof (unsigned int));
    for (i = 3; i <= n / 2; i += 2) {
        if (ISPRIME (i)) {
            for (j = 3 * i; j <= n; j += 2 * i) {
                CLEARPRIME (j);
            }
        }
    }
    for (i = 6; i <= n; i += 2) {
        for (j = 3; j <= i / 2; j += 2) {
            if (ISPRIME (j) &&ISPRIME(i - j)) {
                printf ("%d=%d+%d\n", i, j, i - j);
                break;
            }
        }
    }
    free (isprimebits);
    return 0;
}

