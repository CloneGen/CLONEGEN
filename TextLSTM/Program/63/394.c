int main () {
    int a [100] [100], b [100] [100], c [100] [100] = {0}, x1, x2, y1, y2, i, j, k;
    scanf ("%d %d", &x1, &y1);
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++)
            scanf ("%d", &a[i][j]);
        j = 0;
    }
    scanf ("%d %d", &x2, &y2);
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++)
            scanf ("%d", &b[i][j]);
        j = 0;
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            for (k = 0; k < y1; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            k = 0;
        }
        j = 0;
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            printf ("%d", c[i][j]);
            if (j != y2 - 1)
                printf (" ");
            else
                printf ("\n");
        }
        j = 0;
    }
}

