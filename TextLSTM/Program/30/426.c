void main () {
    int n, i;
    long sq_sum = 0;
    int is_7_rlt (int n);
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        if (!is_7_rlt (i))
            sq_sum += i * i;
    printf ("%ld", sq_sum);
}

int is_7_rlt (int n) {
    if (n % 7 == 0)
        return 1;
    else if (n / 10 == 7 || (n - (n / 10) * 10) == 7)
        return 1;
    else
        return 0;
}

