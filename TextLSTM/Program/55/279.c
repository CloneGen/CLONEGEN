void main () {
    int a, b, i, n, k, p [100];
    long int m = 0, j, q;
    char in [100], t, out [100];
    scanf ("%d", &a);
    for (i = 0; i <= 29; i++) {
        t = getchar ();
        n = i;
        if (t == 32) {
            if (i != 0) {
                break;
            }
        }
        else {
            in[i - 1] = t;
        }
    }
    scanf ("%d", &b);
    for (i = 0; i <= n - 2; i++) {
        if (in[i] > 47 && in[i] < 58) {
            j = in[i] - 48;
        }
        if (in[i] > 64 && in[i] < 91) {
            j = in[i] - 55;
        }
        if (in[i] > 96 && in[i] < 123) {
            j = in[i] - 87;
        }
        for (k = 1 + i; k <= n - 2; k++) {
            j = j * a;
        }
        m = m + j;
        q = m;
    }
    for (i = 1; i <= 500; i++) {
        m = m / b;
        n = i;
        if (m == 0) {
            break;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        p[n - 1 - i] = (q % b);
        q = q / b;
    }
    for (i = 0; i <= n - 1; i++) {
        if (p[i] >= 0 && p[i] <= 9) {
            out[i] = p[i] + 48;
        }
        if (p[i] >= 10 && p[i] <= 35) {
            out[i] = p[i] + 55;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        printf ("%c", out[i]);
    }
}

