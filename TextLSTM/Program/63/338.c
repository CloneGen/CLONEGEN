int main () {
    int n, j, i, k, x1, y1, y2;
    int a [100] [100] = {0}, b [100] [100] = {0}, c [100] [100] = {0};
    scanf ("%d%d", &x1, &y1);
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y1 - 1; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    scanf ("%d%d", &y1, &y2);
    for (i = 0; i <= y1 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++) {
            scanf ("%d", &b[i][j]);
        }
    }
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++) {
            c[i][j] = 0;
            for (k = 0; k <= y1 - 1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++) {
            if (j == y2 - 1) {
                printf ("%d", c[i][j]);
            }
            else {
                printf ("%d ", c[i][j]);
            }
        }
        printf ("\n");
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

