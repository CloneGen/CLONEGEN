void main () {
    int i, j, k, a, b, c [8] [8], d [8] [8], e [8], temp;
    scanf ("%d,%d", &a, &b);
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf ("%d", &c[i][j]);
            d[i][j] = c[i][j];
        }
    }
    for (i = 0; i < a; i++) {
        for (j = 0; j < b - 1; j++) {
            for (k = 0; k < b - j - 1; k++) {
                if (c[i][k] > c[i][k + 1]) {
                    temp = c[i][k];
                    c[i][k] = c[i][k + 1];
                    c[i][k + 1] = temp;
                }
            }
        }
        for (j = 0; j < b; j++) {
            if (d[i][j] == c[i][b - 1]) {
                e[i] = j;
            }
        }
    }
    for (i = 0; i < a; i++) {
        k = 0;
        for (j = 0; j < a; j++) {
            if (c[i][b - 1] > d[j][e[i]]) {
                k = 1;
            }
        }
        if (k == 0) {
            printf ("%d+%d", i, e[i]);
            break;
        }
    }
    if (k == 1) {
        printf ("No");
    }
}

