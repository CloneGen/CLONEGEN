int main () {
    int n, p, q, i;
    scanf ("%d", &n);
    for (i = 0; i < 10; i++) {
        p = i * 100;
        q = (i + 1) * 100;
        if (n > p && n < q) {
            printf ("%d\n", i);
            break;
        }
    }
    n = n - 100 * i;
    if (n >= 50) {
        i = 1;
        printf ("1\n");
    }
    else {
        i = 0;
        printf ("0\n");
    }
    n = n - i * 50;
    for (i = 0; i < 3; i++) {
        p = i * 20;
        q = (i + 1) * 20;
        if (p <= n && q > n) {
            printf ("%d\n", i);
            break;
        }
    }
    n = n - i * 20;
    if (n >= 10) {
        i = 1;
        printf ("1\n");
    }
    else {
        i = 0;
        printf ("0\n");
    }
    n = n - i * 10;
    if (n >= 5) {
        i = 1;
        printf ("1\n");
    }
    else {
        i = 0;
        printf ("0\n");
    }
    n = n - i * 5;
    printf ("%d", n);
    return 0;
}

