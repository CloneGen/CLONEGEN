int main () {
    int fen (int n, int k, int i, int *a, int m);
    int n, k, i, x = 1, m = 0;
    int *a;
    a = &x;
    scanf ("%d%d", &n, &k);
    i = n;
    printf ("%d", fen (n, k, i, a, m));
    return 0;
}

int fen (int n, int k, int i, int *a, int m) {
    int t;
    int pan (int t, int n, int k, int i, int *a, int m);
    if (i == 1) {
        m = n * *a + k;
    }
    if (i != 1) {
        t = fen (n, k, i - 1, a, m);
        t = pan (t, n, k, i, a, m);
        m = n * (t / (n - 1)) + k;
    }
    return m;
}

int pan (int t, int n, int k, int i, int *a, int m) {
    int fen (int n, int k, int i, int *a, int m);
    if (t % (n - 1) != 0) {
        (*a)++;
        t = fen (n, k, i - 1, a, m);
        t = pan (t, n, k, i, a, m);
    }
    return t;
}

