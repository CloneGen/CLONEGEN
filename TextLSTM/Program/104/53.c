void main () {
    int x [12], y [12], i, j, k = 0, a = 0, b = 0, c = 0;
    scanf ("%d%d", &x[0], &y[0]);
    for (i = 1; x[i - 1] != 0; i++) {
        x[i] = x[i - 1] / 2;
        if (x[i] == 0)
            a = i;
    }
    for (i = 1; y[i - 1] != 0; i++) {
        y[i] = y[i - 1] / 2;
        if (y[i] == 0)
            b = i;
    }
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            if (x[i] == y[j]) {
                k = i;
                c = 1;
                break;
            }
        }
        if (c == 1)
            break;
    }
    printf ("%d", x[k]);
}

