void main () {
    int n, a [100], i, max, secondmax;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    max = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    if (a[0] == max) {
        secondmax = a[1];
        for (i = 1; i < n; i++) {
            if (a[i] > secondmax)
                secondmax = a[i];
        }
    }
    else {
        secondmax = a[0];
        for (i = 0; i < n; i++) {
            if (a[i] < max && a[i] > secondmax)
                secondmax = a[i];
        }
    }
    printf ("%d\n", max);
    printf ("%d\n", secondmax);
}

