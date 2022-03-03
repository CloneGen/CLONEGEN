int main () {
    int x1, y1, x2, y2, i, j, k;
    int a [100] [100] = {0};
    int b [100] [100] = {0};
    int c [100] [100] = {0};
    scanf ("%d %d", &x1, &y1);
    for (i = 0; i <= (x1 - 1); i++) {
        for (j = 0; j <= (y1 - 1); j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    scanf ("%d %d", &x2, &y2);
    for (i = 0; i <= (x2 - 1); i++) {
        for (j = 0; j <= (y2 - 1); j++) {
            scanf ("%d", &b[i][j]);
        }
    }
    for (i = 0; i <= (x1 - 1); i++) {
        for (j = 0; j <= (y2 - 1); j++) {
            c[i][j] = 0;
        }
    }
    for (i = 0; i <= (x1 - 1); i++) {
        for (j = 0; j <= (y2 - 1); j++) {
            for (k = 0; k <= (x2 - 1); k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i <= (x1 - 1); i++) {
        for (j = 0; j <= (y2 - 1); j++) {
            if (j < (y2 - 1))
                printf ("%d ", c[i][j]);
            else
                printf ("%d\n", c[i][j]);
        }
    }
}

