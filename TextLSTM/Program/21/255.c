int main () {
    int n, i, j, t, k = 0, c [300] = {0}, a [300];
    long double sum = 0, b [300], aver = 0, max = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    aver = sum / n;
    for (i = 0; i < n; i++) {
        b[i] = a[i] - aver;
        if (b[i] < 0)
            b[i] = -b[i];
        if (b[i] > max)
            max = b[i];
    }
    for (j = 0; j < (n - 1); j++) {
        for (i = 0; i < (n - 1 - j); i++) {
            if (a[i] > a[i + 1]) {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    for (i = 0; i < n; i++) {
        if ((a[i] - aver) == max || (a[i] - aver) == -max) {
            c[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k - 1; i++)
        printf ("%d,", c[i]);
    printf ("%d", c[k - 1]);
    return 0;
}

