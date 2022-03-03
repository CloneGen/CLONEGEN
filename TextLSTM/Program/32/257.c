void main () {
    char a [30] [100], b [30] [100], c [30] [100];
    int n, i, j, p [100], q [100], alpha [30] [100], beta [30] [100], gama [30] [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", a[i]);
        scanf ("%s", b[i]);
        for (j = 0; a[i][j] != '\0'; j++)
            ;
        p[i] = j;
        for (j = 0; b[i][j] != '\0'; j++)
            ;
        q[i] = j;
        for (j = 0; j < p[i]; j++)
            alpha[i][j] = a[i][p[i] - 1 - j] - 48;
        for (j = 0; j < q[i]; j++)
            beta[i][j] = b[i][q[i] - 1 - j] - 48;
        for (j = q[i]; j < p[i]; j++)
            beta[i][j] = 0;
        for (j = 0; j < p[i]; j++) {
            gama[i][j] = alpha[i][j] - beta[i][j];
            if (gama[i][j] < 0) {
                gama[i][j] += 10;
                alpha[i][j + 1] -= 1;
            }
        }
        for (j = 0; j < p[i]; j++)
            c[i][j] = gama[i][p[i] - 1 - j] + 48;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; c[i][j] == '0'; j++)
            ;
        for (; j < p[i]; j++)
            printf ("%c", c[i][j]);
        printf ("\n");
    }
}

