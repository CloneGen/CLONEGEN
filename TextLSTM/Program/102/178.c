main () {
    int n, ms = 1, ws = 1;
    double m [50], w [50], q;
    for (int j = 0;
    j <= 49; j++) {
        m[j] = 0;
        w[j] = 0;
    }
    scanf ("%d", &n);
    char x [45] [10];
    for (int i = 1;
    i <= n; i++) {
        scanf ("%s %lf", x[i], &q);
        if (x[i][0] == 'm') {
            m[ms] = q;
            ms++;
        }
        if (x[i][0] == 'f') {
            w[ws] = q;
            ws++;
        }
    }
    for (int i = 1;
    i <= ms - 1; i++)
        for (int j = 1;
        j <= ms - 1 - i; j++) {
            if (m[j + 1] < m[j]) {
                double zhong = m[j + 1];
                m[j + 1] = m[j];
                m[j] = zhong;
            }
        }
    for (int i = 1;
    i <= ms - 1; i++)
        printf ("%.2lf ", m[i]);
    for (int i = 1;
    i <= ws - 1; i++)
        for (int j = 1;
        j <= ws - 1 - i; j++) {
            if (w[j + 1] < w[j]) {
                double zhong = w[j + 1];
                w[j + 1] = w[j];
                w[j] = zhong;
            }
        }
    for (int i = ws - 1;
    i >= 2; i--)
        printf ("%.2lf ", w[i]);
    printf ("%.2lf", w[1]);
}

