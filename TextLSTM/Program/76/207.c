int main () {
    int n, i, j, m, p, k, l;
    scanf ("%d", &n);
    int a [30], b [30];
    for (i = 0; i < n; i++) {
        scanf ("%d%d", &a[i], &b[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                m = a[j];
                p = b[j];
                a[j] = a[j + 1];
                b[j] = b[j + 1];
                a[j + 1] = m;
                b[j + 1] = p;
            }
            if (a[j] <= a[j + 1]) {
                a[j] = a[j];
                b[j] = b[j];
                a[j + 1] = a[j + 1];
                b[j + 1] = b[j + 1];
            }
        }
    }
    k = a[0];
    l = b[0];
    for (i = 0; i < n - 1; i++) {
        if (b[i] >= a[i + 1] && b[i] <= b[i + 1]) {
            k = a[i];
            l = b[i + 1];
        }
        if (b[i] > b[i + 1]) {
            k = a[i];
            l = b[i];
        }
        if (l < a[i + 1]) {
            k = 0;
            l = 0;
            break;
        }
    }
    if (k == 0 && l == 0) {
        printf ("no");
    }
    if (k != 0 || l != 0) {
        printf ("%d %d", a[0], l);
    }
    return 0;
}

