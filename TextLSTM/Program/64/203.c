int main () {
    int a [10] [3], m, i, j, n, d [45] [6], w;
    double b [45], q;
    m = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            b[m] = sqrt ((a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][1] - a[j][1]) * (a[i][1] - a[j][1]) + (a[i][2] - a[j][2]) * (a[i][2] - a[j][2]));
            d[m][0] = a[i][0];
            d[m][1] = a[i][1];
            d[m][2] = a[i][2];
            d[m][3] = a[j][0];
            d[m][4] = a[j][1];
            d[m][5] = a[j][2];
            m++;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m - i - 1; j++) {
            if (b[j] < b[j + 1]) {
                q = b[j];
                b[j] = b[j + 1];
                b[j + 1] = q;
                w = d[j][0];
                d[j][0] = d[j + 1][0];
                d[j + 1][0] = w;
                w = d[j][1];
                d[j][1] = d[j + 1][1];
                d[j + 1][1] = w;
                w = d[j][2];
                d[j][2] = d[j + 1][2];
                d[j + 1][2] = w;
                w = d[j][3];
                d[j][3] = d[j + 1][3];
                d[j + 1][3] = w;
                w = d[j][4];
                d[j][4] = d[j + 1][4];
                d[j + 1][4] = w;
                w = d[j][5];
                d[j][5] = d[j + 1][5];
                d[j + 1][5] = w;
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", d[i][0], d[i][1], d[i][2], d[i][3], d[i][4], d[i][5], b[i]);
    }
    return 0;
}

