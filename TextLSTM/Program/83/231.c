int main () {
    int a [11], b [11], n, i, m = 0;
    float c [11], g, d = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    for (i = 1; i <= n; i++)
        scanf ("%d", &b[i]);
    for (i = 1; i <= n; i++) {
        if (b[i] <= 100 && b[i] >= 90)
            c[i] = 4.0;
        if (b[i] <= 89 && b[i] >= 85)
            c[i] = 3.7;
        if (b[i] <= 84 && b[i] >= 82)
            c[i] = 3.3;
        if (b[i] <= 81 && b[i] >= 78)
            c[i] = 3.0;
        if (b[i] <= 77 && b[i] >= 75)
            c[i] = 2.7;
        if (b[i] <= 74 && b[i] >= 72)
            c[i] = 2.3;
        if (b[i] <= 71 && b[i] >= 68)
            c[i] = 2.0;
        if (b[i] <= 67 && b[i] >= 64)
            c[i] = 1.5;
        if (b[i] <= 63 && b[i] >= 60)
            c[i] = 1.0;
        if (b[i] < 60)
            c[i] = 0.0;
    }
    for (i = 1; i <= n; i++) {
        c[i] = c[i] * a[i];
    }
    for (i = 1; i <= n; i++) {
        d = d + c[i];
        m = m + a[i];
    }
    g = d / m;
    printf ("%.2f", g);
    return 0;
}

