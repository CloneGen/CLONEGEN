int main () {
    int n, y, t, sum = 0, a;
    scanf ("%d", &n);
    for (int i = 1;
    i <= n; i++) {
        t = i % 7;
        if (t != 0) {
            y = i % 10;
            a = i / 10;
            if (y != 7 && a != 7) {
                sum = sum + i * i;
            }
        }
    }
    printf ("%d", sum);
    return 0;
}

