int main () {
    int m, n, i, j, a [10000], sum;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &m);
        if (m == 0)
            printf ("60\n");
        if (m != 0) {
            sum = 0;
            for (j = 0; j < m; j++) {
                scanf ("%d", &a[j]);
            }
            sum = a[m - 1] + 3 * m;
            if (sum <= 60)
                printf ("%d\n", (60 - 3 * m));
            if (sum > 60) {
                for (j = 0; j < m; j++) {
                    if ((a[j] + 3 * (j + 1)) < 60 && (a[j + 1] + 3 * (j + 1)) >= 60) {
                        printf ("%d\n", (60 - 3 * (j + 1)));
                        break;
                    }
                    if ((a[j] + 3 * (j + 1)) >= 60 && (a[j] + 3 * (j + 1)) <= 63) {
                        printf ("%d\n", a[j]);
                        break;
                    }
                }
            }
        }
    }
    scanf ("%d", 1);
    return 0;
}

