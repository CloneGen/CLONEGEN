float main () {
    float a [99], b [99], sum [99];
    int i, j, n [99], m;
    scanf ("%d", &m);
    a[0] = 2;
    a[1] = 3;
    b[0] = 1;
    b[1] = 2;
    for (j = 0; j < m; j++) {
        scanf ("%d", &n[j]);
        if (n[j] == 1) {
            printf ("2.000\n");
        }
        else if (n[j] == 2) {
            printf ("3.500\n");
        }
        else {
            sum[j] = (2 / 1) + (3 / 2);
            for (i = 2; i < n[j]; i++) {
                a[i] = a[i - 1] + a[i - 2];
                b[i] = b[i - 1] + b[i - 2];
                sum[j] += a[i] / b[i];
            }
            printf ("%.3f\n", sum[j] + 0.5);
        }
    }
    return 0;
}

