int main () {
    int a [10] [10], b [10], c [10], min [5] = {10000000, 10000000, 10000000, 10000000, 10000000}, max [10] = {-10000000, -10000000, -10000000, -10000000, -10000000}, i, j, k, l, m, n, o = 0, p;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (a[i][j] > max[i]) {
                max[i] = a[i][j];
                b[i] = j;
            }
        }
    }
    for (j = 0; j < 5; j++) {
        for (i = 0; i < 5; i++) {
            if (a[i][j] < min[j]) {
                min[j] = a[i][j];
                c[j] = i;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        if (c[b[i]] == i) {
            o++;
            printf ("%d %d %d\n", i + 1, b[i] + 1, a[i][b[i]]);
        }
    }
    if (o == 0)
        printf ("not found");
    return 0;
}

