int main () {
    int i, j, k, m, n, p;
    k = 0;
    p = 0;
    scanf ("%d", &n);
    for (i = 3; i < n - 1; i++) {
        k = 0;
        m = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                k++;
            }
            if ((i + 2) % j == 0) {
                m++;
            }
        }
        if ((m == 0) && (k == 0)) {
            p++;
            if (p == 1) {
                printf ("%d %d", i, i + 2);
            }
            else {
                printf ("\n%d %d", i, i + 2);
            }
        }
    }
    if (p == 0) {
        printf ("empty");
    }
    return 0;
}

