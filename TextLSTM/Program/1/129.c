int T, n;

int calc (int n, int min) {
    if (n == 1)
        return 1;
    if (n <= min)
        return 0;
    int re = 0;
    for (int i = min + 1;
    i <= n; i++)
        if (n % i == 0) {
            re += calc (n / i, i - 1);
        }
    if (!re)
        re = 1;
    return re;
}

int main () {
    scanf ("%d", &T);
    while (T--) {
        scanf ("%d", &n);
        printf ("%d\n", calc (n, 1));
    }
    return 0;
}

