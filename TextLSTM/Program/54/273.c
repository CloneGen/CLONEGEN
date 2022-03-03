int main () {
    int n, k;
    scanf ("%d%d", &n, &k);
    if (n < k) {
        printf ("n>k not match!\n");
        return 1;
    }
    int m = n + k;
    int flag = 1;
    int i;
    int x;
    while (1) {
        x = m;
        for (i = 0; i < n - 1; i++) {
            if (x % n != k) {
                flag = 0;
                break;
            }
            x = x - x / n - k;
        }
        if (x % n == k && flag == 1 && x > n)
            break;
        flag = 1;
        m++;
    }
    printf ("%d\n", m);
    return 0;
}

