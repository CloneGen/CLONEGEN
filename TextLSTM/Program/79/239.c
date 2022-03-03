int main () {
    int b [1000];
    int x = 0;
    scanf ("%d %d", &b[0], &b[1]);
    for (x = 0; b[x] != 0; x = x + 2) {
        int n, m, d = 0, i = 0, k = 0;
        n = b[x];
        m = b[x + 1];
        int a [999];
        for (i = 0; i < n; i++)
            a[i] = i + 1;
        for (i = 0; d < n - 1; i++) {
            if (i == n)
                i = 0;
            while (a[i] == 0) {
                i++;
                if (i == n)
                    i = 0;
            }
            k++;
            if (k == m) {
                a[i] = 0;
                k = 0;
                d++;
            }
        }
        for (i = 0; i < n; i++) {
            if (a[i] != 0)
                printf ("%d\n", a[i]);
        }
        scanf ("%d %d", &b[x + 2], &b[x + 3]);
    }
    return 0;
}

