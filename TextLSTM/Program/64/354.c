void main () {
    int i, j, k = 0, p, n, c [100] [3], d [100] [6], temp;
    double t [100], temp2;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++)
            scanf ("%d", *(c + i) + j);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            d[k][0] = c[i][0];
            d[k][1] = c[i][1];
            d[k][2] = c[i][2];
            d[k][3] = c[j][0];
            d[k][4] = c[j][1];
            d[k][5] = c[j][2];
            t[k] = (c[i][0] - c[j][0]) * (c[i][0] - c[j][0]);
            t[k] += (c[i][1] - c[j][1]) * (c[i][1] - c[j][1]);
            t[k] += (c[i][2] - c[j][2]) * (c[i][2] - c[j][2]);
            t[k] = sqrt (t[k]);
            k++;
        }
    }
    for (i = 1; i < k; i++) {
        for (j = 0; j < k - i; j++) {
            if (t[j] < t[j + 1]) {
                for (p = 0; p < 6; p++) {
                    temp = d[j][p];
                    d[j][p] = d[j + 1][p];
                    d[j + 1][p] = temp;
                }
                temp2 = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp2;
            }
        }
    }
    for (i = 0; i < k; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", d[i][0], d[i][1], d[i][2], d[i][3], d[i][4], d[i][5], t[i]);
}

