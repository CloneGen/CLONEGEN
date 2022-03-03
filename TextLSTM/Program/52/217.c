int n, m;

main () {
    void f (int a []);
    int i, a [100];
    scanf ("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    f (a);
    for (i = 0; i < n - 1; i++) {
        printf ("%d ", a[i]);
    }
    printf ("%d", a[n - 1]);
}

void f (int a []) {
    int i, *p = a, t;
    for (i = n - 1; i > 0; i--) {
        t = *(p + i);
        *(p + i) = *(p + i - 1);
        *(p + i - 1) = t;
    }
    m--;
    if (m != 0)
        f (a);
}

