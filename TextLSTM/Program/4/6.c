void main () {
    int a, b, i, j, k;
    int c [100] [100];
    scanf ("%d%d", &a, &b);
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf ("%d", &c[i][j]);
        }
    }
    if (b > a) {
        for (k = 0; k < a; k++) {
            i = 0;
            j = k;
            while (i <= k) {
                printf ("%d\n", c[i][j]);
                i = i + 1;
                j = j - 1;
            }
        }
        for (k = 0; k < b - a; k++) {
            i = 0;
            j = a + k;
            while (i <= a - 1) {
                printf ("%d\n", c[i][j]);
                i++;
                j--;
            }
        }
        for (k = 0; k < a - 1; k++) {
            i = k + 1;
            j = b - 1;
            while (i <= a - 1) {
                printf ("%d\n", c[i][j]);
                i++;
                j--;
            }
        }
    }
    else if (b < a) {
        for (k = 0; k < b; k++) {
            i = 0;
            j = k;
            while (j >= 0) {
                printf ("%d\n", c[i][j]);
                i = i + 1;
                j = j - 1;
            }
        }
        for (k = 0; k < a - b; k++) {
            i = k + 1;
            j = b - 1;
            while (j >= 0) {
                printf ("%d\n", c[i][j]);
                i++;
                j--;
            }
        }
        for (k = 0; k < b - 1; k++) {
            i = a - b + 1 + k;
            j = b - 1;
            while (i <= a - 1) {
                printf ("%d\n", c[i][j]);
                i++;
                j--;
            }
        }
    }
    else {
        for (k = 0; k < a; k++) {
            i = 0;
            j = k;
            while (i <= k) {
                printf ("%d\n", c[i][j]);
                i = i + 1;
                j = j - 1;
            }
        }
        for (k = 0; k < a - 1; k++) {
            i = k + 1;
            j = b - 1;
            while (i <= a - 1) {
                printf ("%d\n", c[i][j]);
                i++;
                j--;
            }
        }
    }
}

