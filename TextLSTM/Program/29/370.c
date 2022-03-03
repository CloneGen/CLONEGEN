int main () {
    int n, i, k, j, b, a;
    double sum = 0.0;
    scanf ("%d", &n);
    int geshu [100];
    for (i = 0; i < n; i++) {
        scanf ("%d", &k);
        geshu[i] = k;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < geshu[i]; j++) {
            int sz [100];
            sz[0] = 1;
            sz[1] = 2;
            for (b = 2; b < geshu[i]; b++) {
                sz[b] = sz[b - 1] + sz[b - 2];
            }
            int szz [100];
            szz[0] = 2;
            szz[1] = 3;
            for (a = 2; a < geshu[i]; a++) {
                szz[a] = szz[a - 1] + szz[a - 2];
            }
            sum = sum + szz[j] * 1.0 / sz[j];
        }
        printf ("%.3lf\n", sum);
        sum = 0.0;
    }
    return 0;
}

