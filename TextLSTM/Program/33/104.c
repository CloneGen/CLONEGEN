int main () {
    int k, m, n;
    char cal [2000] [256];
    int i, j, temp1 = 0, temp2 = 0, temp4 = 0, temp3 = 0;
    double temp11 = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%s", cal[i]);
        m = strlen (cal[i]);
        for (j = 0; j <= m; j++) {
            if (cal[i][j] == 'A') {
                cal[i][j] = 'T';
                continue;
            }
            if (cal[i][j] == 'T') {
                cal[i][j] = 'A';
                continue;
            }
            if (cal[i][j] == 'C') {
                cal[i][j] = 'G';
                continue;
            }
            if (cal[i][j] == 'G') {
                cal[i][j] = 'C';
                continue;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        printf ("%s\n", cal[i]);
    }
    return 0;
}

