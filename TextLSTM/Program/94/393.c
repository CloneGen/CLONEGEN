int main () {
    int N, a [500], b [500], k, i, j, t;
    k = 0;
    scanf ("%d", &N);
    i = 0;
    while (i < N) {
        scanf ("%d", &a[i]);
        i = i + 1;
    }
    i = 0;
    while (i < N) {
        if (a[i] % 2 == 1) {
            k = k + 1;
            b[k - 1] = a[i];
        }
        i = i + 1;
    }
    for (j = 0; j < k - 1; j = j + 1) {
        for (i = 0; i < k - j - 1; i = i + 1) {
            if (b[i] > b[i + 1]) {
                t = b[i];
                b[i] = b[i + 1];
                b[i + 1] = t;
            }
        }
    }
    i = 0;
    while (i < k) {
        if (i < k - 1) {
            printf ("%d,", b[i]);
            i = i + 1;
        }
        else {
            printf ("%d", b[i]);
            i = i + 1;
        }
    }
    scanf ("%d", &N);
    return 0;
}

