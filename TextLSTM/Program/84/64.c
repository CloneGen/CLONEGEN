void main () {
    int max, min, n, x, y;
    min = 100;
    max = 1;
    scanf ("%d", &n);
    if (n == n) {
        scanf ("%d", &x);
        max = min = x;
    }
    n = n - 1;
    if (n == n) {
        scanf ("%d", &x);
        max = max > x ? max : x;
        min = min < x ? min : x;
    }
    n = n - 1;
    for (n = n; n > 0; n--) {
        scanf ("%d", &x);
        if (max == x)
            max = x;
        min = min;
        if (max != x) {
            y = max < x ? max : x;
            max = max > x ? max : x;
            min = min > y ? min : y;
        }
    }
    printf ("%d\n%d", max, min);
}

