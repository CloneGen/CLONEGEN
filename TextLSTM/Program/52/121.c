int main () {
    int a [100], n, m, i;
    int *p = a;
    scanf ("%d %d", &n, &m);
    for (i = 0; i <= n - 1; i++) {
        scanf ("%d", &a[i]);
    }
    printf ("%d", a[n - m]);
    for (p = &a[n - m] + 1; p <= &a[n - 1]; p++) {
        printf (" %d", *p);
    }
    for (p = a; p <= a + n - m - 1; p++) {
        printf (" %d", *p);
    }
    return 0;
}

