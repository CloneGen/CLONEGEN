int main () {
    int a, b, i, j, k, l, m, p;
    int f [num] [num];
    p = 0;
    scanf ("%d %d", &a, &b);
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf ("%d", &f[i][j]);
        }
    }
    for (i = 0;; i++) {
        if (p == a * b)
            break;
        for (j = i; j < b - i; j++) {
            p++;
            if (p < a * b) {
                printf ("%d\n", f[i][j]);
            }
            else {
                printf ("%d", f[i][j]);
                break;
            }
        }
        if (p == a * b)
            break;
        for (k = i + 1; k < a - i; k++) {
            p++;
            if (p < a * b) {
                printf ("%d\n", f[k][b - 1 - i]);
            }
            else {
                printf ("%d", f[k][b - 1 - i]);
                break;
            }
        }
        if (p == a * b)
            break;
        for (l = b - 2 - i; l > i - 1; l--) {
            p++;
            if (p < a * b) {
                printf ("%d\n", f[a - 1 - i][l]);
            }
            else {
                printf ("%d", f[a - 1 - i][l]);
                break;
            }
        }
        if (p == a * b)
            break;
        for (m = a - 2 - i; m > i; m--) {
            p++;
            if (p < a * b) {
                printf ("%d\n", f[m][i]);
            }
            else {
                printf ("%d", f[m][i]);
                break;
            }
        }
        if (p == a * b)
            break;
    }
    return 0;
}

