int main () {
    double a [11] [4], b [46] [7];
    double c [46], p;
    int i, j, k = 0, n;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 3; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = i + 1; j <= n; j++) {
            k++;
            c[k] = sqrt ((a[i][1] - a[j][1]) * (a[i][1] - a[j][1]) + (a[i][2] - a[j][2]) * (a[i][2] - a[j][2]) + (a[i][3] - a[j][3]) * (a[i][3] - a[j][3]));
            b[k][1] = a[i][1];
            b[k][2] = a[i][2];
            b[k][3] = a[i][3];
            b[k][4] = a[j][1];
            b[k][5] = a[j][2];
            b[k][6] = a[j][3];
        }
    }
    for (i = 1; i <= k - 1; i++) {
        for (j = 1; j <= k - i; j++) {
            if (c[j] < c[j + 1]) {
                p = c[j];
                c[j] = c[j + 1];
                c[j + 1] = p;
                p = b[j][1];
                b[j][1] = b[j + 1][1];
                b[j + 1][1] = p;
                p = b[j][2];
                b[j][2] = b[j + 1][2];
                b[j + 1][2] = p;
                p = b[j][3];
                b[j][3] = b[j + 1][3];
                b[j + 1][3] = p;
                p = b[j][4];
                b[j][4] = b[j + 1][4];
                b[j + 1][4] = p;
                p = b[j][5];
                b[j][5] = b[j + 1][5];
                b[j + 1][5] = p;
                p = b[j][6];
                b[j][6] = b[j + 1][6];
                b[j + 1][6] = p;
            }
        }
    }
    for (i = 1; i <= k; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", (int) b[i][1], (int) b[i][2], (int) b[i][3], (int) b[i][4], (int) b[i][5], (int) b[i][6], c[i]);
    return 0;
}

