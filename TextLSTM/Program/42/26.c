int main () {
    int a [100001];
    memset (a, 0, sizeof (a));
    int n = 0, k = 0, t = 0;
    scanf ("%d", &n);
    for (int i = 0;
    i < n; i++)
        scanf ("%d", &a[i]);
    scanf ("%d", &k);
    for (int i = 0;
    i < n; i++)
        if (a[i] == k)
            t++;
    for (int l = 0;
    l <= t; l++) {
        for (int i = 0;
        i < n; i++) {
            if (a[i] == k) {
                for (int j = i;
                j < n; j++)
                    a[j] = a[j + 1];
            }
        }
    }
    printf ("%d", a[0]);
    for (int i = 1;
    i < n - t; i++)
        printf (" %d", a[i]);
    return 0;
}

