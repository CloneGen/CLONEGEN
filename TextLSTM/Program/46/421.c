int main () {
    int a [100] [100];
    int h, s, i, j, m, z = 0;
    scanf ("%d%d", &h, &s);
    m = h * s;
    for (i = 0; i < h; i++) {
        for (j = 0; j < s; j++)
            scanf ("%d", &a[i][j]);
    }
    for (i = 0;; i++) {
        for (j = i; j < s - i; j++) {
            printf ("%d\n", a[i][j]);
            z++;
        }
        if (z == m)
            break;
        for (j = i + 1; j < h - i; j++) {
            printf ("%d\n", a[j][s - 1 - i]);
            z++;
        }
        if (z == m)
            break;
        for (j = s - i - 2; j >= i; j--) {
            printf ("%d\n", a[h - i - 1][j]);
            z++;
        }
        if (z == m)
            break;
        for (j = h - i - 2; j > i; j--) {
            printf ("%d\n", a[j][i]);
            z++;
        }
        if (z == m)
            break;
    }
}

