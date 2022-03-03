int main () {
    int k, m, n;
    int result [100];
    int i, j, temp1 = 0, temp2 = 0, tempr = 0;
    double temp3 = 0;
    scanf ("%d", &k);
    for (temp2 = 1; temp2 <= k; temp2++) {
        scanf ("%d%d", &m, &n);
        tempr = 0;
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                scanf ("%d", &temp1);
                if (i == 1 || i == m || j == 1 || j == n) {
                    tempr += temp1;
                }
            }
        }
        result[temp2] = tempr;
    }
    for (i = 1; i <= k; i++) {
        printf ("%d\n", result[i]);
    }
    return 0;
}

