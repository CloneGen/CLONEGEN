void main () {
    int sum, x, y, k, i, a;
    scanf ("%d\n%d%d", &sum, &x, &y);
    for (i = 1; i < sum - 1; i++) {
        scanf ("%d", &k);
        if (x > k) {
            a = k;
            x = x;
            if (y > a) {
                y = y;
            }
            if (y < a) {
                y = a;
            }
        }
        if (x < k) {
            a = x;
            x = k;
            if (y > a) {
                y = y;
            }
            if (y < a) {
                y = a;
            }
        }
    }
    printf ("%d\n%d\n", x, y);
}

