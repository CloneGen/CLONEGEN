int f (int n, int k) {
    int a [100], i, m;
    a[n - 1] = 1;
    for (i = n - 1; i > 0; i--) {
        a[i - 1] = (a[i] * n + k) / (n - 1);
    }
    m = n * a[0] + k;
    return m;
}

int main (int argc, char *argv []) {
    int n, k, m;
    scanf ("%d %d", &n, &k);
    if (n == 2) {
        m = f (n, k);
    }
    else
        m = pow (n, n) - k * (n - 1);
    printf ("%d\n", m);
    return 0;
}

