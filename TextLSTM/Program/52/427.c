int main () {
    int m, n;
    scanf ("%d %d\n", &n, &m);
    int i, a [100];
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    int *point;
    for (point = &a[n - m]; point < a + n; point++) {
        printf ("%d ", *point);
    }
    for (point = a; point < a + n - m - 1; point++) {
        printf ("%d ", *point);
    }
    printf ("%d\n", a[n - m - 1]);
    return 0;
}

