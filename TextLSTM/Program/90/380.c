int main (void) {
    int c [1000];
    int k, i;
    int apple (int a, int b);
    int m, n;
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d %d", &m, &n);
        c[i] = apple (m, n);
    }
    for (i = 0; i < k; i++)
        printf ("%d\n", c[i]);
    return 0;
}

int apple (int a, int b) {
    if ((a < 1) || (b < 1))
        return 0;
    if (a == 1 || b == 1)
        return 1;
    if (a < b)
        return apple (a, a);
    if (a == b)
        return apple (a, b - 1) + 1;
    return apple (a, b - 1) + apple (a - b, b);
}

