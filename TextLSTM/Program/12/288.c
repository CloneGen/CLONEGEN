int main () {
    int A [16], pause, i, k, m, count;
    for (;;) {
        count = 0;
        for (i = 0; i < 16; i++) {
            scanf ("%d", &A[i]);
            if (A[i] == 0 || A[i] == -1) {
                break;
            }
        }
        if (A[i] == -1) {
            break;
        }
        for (i = 0; i < 16; i++) {
            if (A[i] == 0) {
                pause = i;
                break;
            }
        }
        for (k = 1; k < pause; k++) {
            for (i = 0; i < pause - k; i++) {
                if (A[i] <= A[i + 1]) {
                    m = A[i];
                    A[i] = A[i + 1];
                    A[i + 1] = m;
                }
            }
        }
        for (k = 0; k < pause; k++) {
            for (i = k + 1; i < pause; i++) {
                if (A[k] == 2 * A[i]) {
                    count++;
                }
            }
        }
        printf ("%d\n", count);
    }
    return 0;
}

