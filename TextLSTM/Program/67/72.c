int main () {
    int n, i, j;
    double x, y, sz [20] [2];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2; j++) {
            scanf ("%lf", &sz[i][j]);
        }
    }
    x = sz[0][1] / sz[0][0];
    for (i = 1; i < n; i++) {
        y = sz[i][1] / sz[i][0];
        if (y - x > 0.05) {
            printf ("better\n");
        }
        else if (x - y > 0.05) {
            printf ("worse\n");
        }
        else if (x - y <= 0.05 || y - x >= 0.05) {
            printf ("same\n");
        }
    }
    return 0;
}

