int main () {
    int a [100] [100], b [100] [100], c [100] [100], x1, x2, y1, y2, i, j, k, m;
    scanf ("%d %d", &x1, &y1);
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    scanf ("%d %d", &x2, &y2);
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++) {
            scanf ("%d", &b[i][j]);
        }
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            c[i][j] = 0;
        }
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            for (m = 0; m < y1; m++) {
                c[i][j] = c[i][j] + a[i][m] * b[m][j];
            }
        }
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2 - 1; j++) {
            printf ("%d ", c[i][j]);
        }
        printf ("%d\n", c[i][y2 - 1]);
    }
    return 0;
}

