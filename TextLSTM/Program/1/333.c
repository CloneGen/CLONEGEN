void main () {
    int st (int a, int b);
    int j, n, m, sum;
    scanf ("%d", &n);
    for (j = 1; j <= n; j++) {
        scanf ("%d", &m);
        sum = st (2, m);
        printf ("%d\n", sum);
    }
}

int st (int a, int b) {
    int i, c;
    c = 0;
    if (a == 0)
        c = c + 1;
    else {
        for (i = a; i <= sqrt (b); i++) {
            if (b % i == 0)
                c = st (i, (b / i)) + c;
        }
        if (i > sqrt (b))
            c = c + 1;
    }
    return c;
}

