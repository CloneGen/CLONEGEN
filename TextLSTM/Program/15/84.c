int main () {
    int n, a [1000] [1000] = {0}, j, m [100], i, k [100], p [100], b [100], s = 0, g = 0;
    scanf ("%d", &n);
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            scanf ("%d", &a[j][i]);
        }
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            if (a[j][i] == 0) {
                s += 1;
                m[s] = j;
                k[s] = i;
                break;
            }
        }
    }
    for (j = n - 1; j > 0; j--) {
        for (i = n - 1; i > 0; i--) {
            if (a[j][i] == 0) {
                g += 1;
                p[g] = j;
                b[g] = i;
                break;
            }
        }
    }
    printf ("%d", (p[1] - m[1] - 1) * (b[1] - k[1] - 1));
    return 0;
}

