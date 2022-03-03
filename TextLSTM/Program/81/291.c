int exchange (int (*) [5]);

int main () {
    int matrix [5] [5], *p;
    for (p = matrix[0]; p - matrix[0] < 25; p++)
        scanf ("%d", p);
    if (exchange (matrix)) {
        for (p = matrix[0]; p - matrix[0] < 25; p++)
            printf ("%d%c", *p, (p - matrix[0] + 1) % 5 ? ' ' : '\n');
    }
    else
        printf ("error\n");
    return 0;
}

int exchange (int (*matrix) [5]) {
    int n, m;
    scanf ("%d%d", &n, &m);
    if (n < 0 || n > 4 || m < 0 || m > 4)
        return 0;
    else {
        int i;
        for (i = 0; i < 5; i++) {
            matrix[m][i] ^= matrix[n][i];
            matrix[n][i] ^= matrix[m][i];
            matrix[m][i] ^= matrix[n][i];
        }
        return 1;
    }
}

