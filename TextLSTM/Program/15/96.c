int main () {
    int m, n;
    int i, j, k;
    int r;
    int ni, nj, nk, nm, nn;
    nk = 0;
    r = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n * n; i++) {
        scanf ("%d", &ni);
        if (ni == 0) {
            nk += 1;
        }
        if (ni == 255 && nk != 0 && r == 0) {
            r = nk;
        }
    }
    r = (nk - 2 * r) / 2 * (r - 2);
    printf ("%d", r);
    return 0;
}

