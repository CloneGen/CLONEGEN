int main () {
    int N, i, j, k, m, e, a [500], b [500];
    scanf ("%d", &N);
    for (i = 0; i < N; i++) {
        scanf ("%d", &a[i]);
    }
    j = -1;
    m = 0;
    for (i = 0; i < N; i++) {
        if (a[i] % 2 == 1) {
            j++;
            b[j] = a[i];
            m++;
        }
    }
    for (k = 0; k < m - 1; k++) {
        for (j = 0; j < m - 1 - k; j++) {
            if (b[j] > b[j + 1]) {
                e = b[j];
                b[j] = b[j + 1];
                b[j + 1] = e;
            }
        }
    }
    for (j = 0; j < m; j++) {
        if (j < m - 1)
            printf ("%d,", b[j]);
        else
            printf ("%d", b[j]);
    }
    scanf ("%d", 1);
    return 0;
}

