void main () {
    int a [10], b [10], m = 0, n, i;
    float c [10], GPA, sum = 0.0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf ("%d", &b[i]);
    for (i = 0; i < n; i++) {
        if (b[i] >= 90 && b[i] <= 100)
            c[i] = a[i] * 4.0;
        if (b[i] >= 85 && b[i] <= 89)
            c[i] = a[i] * 3.7;
        if (b[i] >= 82 && b[i] <= 84)
            c[i] = a[i] * 3.3;
        if (b[i] >= 78 && b[i] <= 81)
            c[i] = a[i] * 3.0;
        if (b[i] >= 75 && b[i] <= 77)
            c[i] = a[i] * 2.7;
        if (b[i] >= 72 && b[i] <= 74)
            c[i] = a[i] * 2.3;
        if (b[i] >= 68 && b[i] <= 71)
            c[i] = a[i] * 2.0;
        if (b[i] >= 64 && b[i] <= 67)
            c[i] = a[i] * 1.5;
        if (b[i] >= 60 && b[i] <= 63)
            c[i] = a[i] * 1.0;
        if (b[i] < 60)
            c[i] = 0.0;
    }
    for (i = 0; i < n; i++) {
        sum += c[i];
        m += a[i];
    }
    GPA = sum / m;
    printf ("%.2f", GPA);
}

