void main () {
    int a [100], b [100], c [100], n, i, l = 0, j, h, max = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d%d", &a[i], &b[i]);
    for (i = 0; i < n; i++) {
        if (i == 0)
            h = 0;
        if (i == n - 1) {
            if (a[i] <= 140 && a[i] >= 90 && b[i] <= 90 && b[i] >= 60) {
                h++;
                c[l] = h;
                l++;
            }
        }
        else {
            if (a[i] <= 140 && a[i] >= 90 && b[i] <= 90 && b[i] >= 60)
                h++;
            else {
                c[l] = h;
                h = 0;
                l++;
            }
        }
    }
    for (i = 0; i < l; i++) {
        if (c[i] > max)
            max = c[i];
    }
    printf ("%d", max);
}

