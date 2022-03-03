int main () {
    int n, m [99];
    int i, j, k, p, q;
    int num [99] [19], sum [99];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &m[i]);
        for (j = 0; j < m[i]; j++)
            scanf ("%d", &num[i][j]);
    }
    for (k = 0; k < n; k++) {
        if (m[k] == 0) {
            sum[k] = 60;
        }
        else {
            int l;
            l = m[k] - 1;
            if (num[k][l] + 3 * l <= 57)
                sum[k] = 60 - 3 * m[k];
            else if (57 < num[k][l] + 3 * l && num[k][l] + 3 * l <= 60)
                sum[k] = num[k][l];
            else {
                for (q = l; q >= 0; q--) {
                    if (num[k][q] + 3 * q <= 57) {
                        sum[k] = 60 - 3 * (q + 1);
                        break;
                    }
                    else if (57 < num[k][q] + 3 * q && num[k][q] + 3 * q <= 60) {
                        sum[k] = num[k][q];
                        break;
                    }
                    else
                        ;
                }
            }
        }
    }
    for (p = 0; p < n; p++)
        printf ("%d\n", sum[p]);
    return 0;
}

