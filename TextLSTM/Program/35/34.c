int main () {
    int a [10] [10], b [10] [10], c [10] [10], p, q, x, y, z = 0, i, j, k, temp;
    scanf ("%d,%d", &p, &q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            b[i][j] = a[i][j];
        }
    }
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = a[i][j];
        }
    }
    for (i = 0; i < p; i++) {
        for (k = 0; k < q - 1; k++) {
            for (j = 0; j < q - 1 - k; j++) {
                if (b[i][j] < b[i][j + 1]) {
                    temp = b[i][j];
                    b[i][j] = b[i][j + 1];
                    b[i][j + 1] = temp;
                }
            }
        }
    }
    for (j = 0; j < q; j++) {
        for (k = 0; k < p - 1; k++) {
            for (i = 0; i < p - 1 - k; i++) {
                if (c[i][j] > c[i + 1][j]) {
                    temp = c[i][j];
                    c[i][j] = c[i + 1][j];
                    c[i + 1][j] = temp;
                }
            }
        }
    }
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            if (c[0][j] == b[i][0]) {
                x = i;
                y = j;
                z = 1;
            }
            else
                continue;
        }
    }
    if (z == 0)
        printf ("No");
    else
        printf ("%d+%d", x, y);
    return 0;
}

