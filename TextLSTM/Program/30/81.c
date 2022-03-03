int main () {
    int n, i, sum;
    scanf ("%d", &n);
    sum = 0;
    if (n < 70) {
        for (i = 1; i <= n; i++) {
            if (((i - 7) % 10 != 0) && ((i % 7) != 0)) {
                sum += i * i;
            }
        }
    }
    else if ((n >= 70) && (n < 80)) {
        int m = 69;
        for (i = 1; i <= m; i++) {
            if (((i - 7) % 10 != 0) && ((i % 7) != 0)) {
                sum += i * i;
            }
        }
    }
    else if (n >= 80) {
        int m = 69;
        for (i = 1; i <= m; i++) {
            if (((i - 7) % 10 != 0) && ((i % 7) != 0)) {
                sum += i * i;
            }
        }
        for (i = 80; i <= n; i++) {
            if (((i - 7) % 10 != 0) && ((i % 7) != 0)) {
                sum += i * i;
            }
        }
    }
    printf ("%d", sum);
    return 0;
}

