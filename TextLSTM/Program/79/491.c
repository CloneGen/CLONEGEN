int main () {
    int a [1000], b [1000];
    int n, m, i = 1, j = 1, k = 1, l = 1;
    while (1) {
        i = 1, j = 1, k = 1, l = 1;
        scanf ("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;
        for (i = 1; i < n; i++) {
            a[i] = i;
        }
        i = 1;
        while (j < n) {
            while (k % m != 0) {
                for (l = 1; l < j; l++) {
                    if (a[(i - 1) % n + 1] == b[l])
                        goto xunhuan;
                }
                k = k + 1;
            xunhuan :
                i = i + 1;
            }
            while (1) {
                for (l = 1; l < j; l++) {
                    if (a[(i - 1) % n + 1] == b[l]) {
                        i = i + 1;
                        break;
                    }
                }
                if (l == j)
                    break;
            }
            b[j] = a[(i - 1) % n + 1];
            j = j + 1;
            k = k + 1;
            i = i + 1;
            while (1) {
                for (l = 1; l < j; l++) {
                    if (a[(i - 1) % n + 1] == b[l]) {
                        i = i + 1;
                        break;
                    }
                }
                if (l == j)
                    break;
            }
        }
        for (l = 1; l <= n; l++) {
            k = 1;
            for (i = 1; i < n; i++) {
                if (l != b[i])
                    k = k + 1;
            }
            if (k == n)
                break;
        }
        printf ("%d\n", l);
    }
    return 0;
}

