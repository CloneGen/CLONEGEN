int main () {
    int n [1000], a [100] [2000], b [100] [1000], i, j, k, l, c, q [1000], d;
    for (i = 0;; i++) {
        scanf ("%d", &n[i]);
        if (n[i] == 0)
            break;
        for (j = 0; j < n[i]; j++)
            scanf ("%d", &a[i][j]);
        for (j = 0; j < n[i]; j++)
            scanf ("%d", &b[i][j]);
    }
    for (k = 0; k < i; k++) {
        for (j = 0; j < n[k]; j++)
            q[j] = 0;
        for (l = 0; l < n[k]; l++)
            for (j = 0; j < n[k] - 1; j++)
                if (a[k][j] < a[k][j + 1]) {
                    c = a[k][j];
                    a[k][j] = a[k][j + 1];
                    a[k][j + 1] = c;
                }
        for (l = 0; l < n[k]; l++)
            for (j = 0; j < n[k] - 1; j++)
                if (b[k][j] < b[k][j + 1]) {
                    c = b[k][j];
                    b[k][j] = b[k][j + 1];
                    b[k][j + 1] = c;
                }
        for (j = n[k]; j < n[k] * 2; j++)
            a[k][j] = a[k][j - n[k]];
        for (l = 0; l < n[k]; l++) {
            q[l] = 0;
            for (j = l; j < l + n[k]; j++)
                if (a[k][j] > b[k][j - l])
                    q[l] += 200;
                else if (a[k][j] < b[k][j - l])
                    q[l] -= 200;
        }
        d = q[0];
        for (j = 1; j < n[k]; j++)
            if (q[j] >= d)
                d = q[j];
        printf ("%d\n", d);
    }
}

