int main () {
    int x1, y1, x2, y2, i, j, k, s;
    int a [100] [100] = {0};
    int b [100] [100] = {0};
    int c [100] [100] = {0};
    scanf ("%d %d", &x1, &y1);
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++)
            scanf ("%d", &a[i][j]);
    }
    scanf ("%d %d", &x2, &y2);
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++)
            scanf ("%d", &b[i][j]);
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            s = 0;
            for (k = 0; k < y1; k++)
                s = s + a[i][k] * b[k][j];
            c[i][j] = s;
        }
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2 - 1; j++) {
            printf ("%d ", c[i][j]);
        }
        printf ("%d\n", c[i][y2 - 1]);
    }
}

