int main () {
    int k = 0, i, j, n, a [20000];
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] == a[i])
                a[j] = 0;
        }
    }
    for (j = n - 1; a[j] == 0; j--)
        k = 0;
    for (i = 0; i < j; i++)
        if (a[i] != 0)
            printf ("%d ", a[i]);
    printf ("%d", a[j]);
    return 0;
}

