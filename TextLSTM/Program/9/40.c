void main () {
    int n, i, j, age [100], dengji [100], p, t;
    char id [100] [10], c;
    int jishuqi = 0, k;
    int l, m;
    scanf ("%d", &n);
    for (i = 0; i <= n - 1; i++) {
        scanf ("%s%d", id[i], &age[i]);
        dengji[i] = i;
    }
    for (i = 0; i <= n - 2; i++)
        for (j = 0; j <= n - 2 - i; j++) {
            if (age[j] < age[j + 1]) {
                t = age[j];
                age[j] = age[j + 1];
                age[j + 1] = t;
                k = dengji[j];
                dengji[j] = dengji[j + 1];
                dengji[j + 1] = k;
                for (p = 0; p <= 9; p++) {
                    c = id[j][p];
                    id[j][p] = id[j + 1][p];
                    id[j + 1][p] = c;
                }
            }
            if (age[j] == age[j + 1]) {
                if (dengji[j] > dengji[j + 1]) {
                    k = dengji[j];
                    dengji[j] = dengji[j + 1];
                    dengji[j + 1] = k;
                    for (p = 0; p <= 9; p++) {
                        c = id[j][p];
                        id[j][p] = id[j + 1][p];
                        id[j + 1][p] = c;
                    }
                }
            }
        }
    for (i = 0; i <= n - 2; i++)
        for (j = 0; j <= n - 2 - i; j++) {
            if (age[j] < 60) {
                if (dengji[j] > dengji[j + 1]) {
                    k = dengji[j];
                    dengji[j] = dengji[j + 1];
                    dengji[j + 1] = k;
                    t = age[j];
                    age[j] = age[j + 1];
                    age[j + 1] = t;
                    for (p = 0; p <= 9; p++) {
                        c = id[j][p];
                        id[j][p] = id[j + 1][p];
                        id[j + 1][p] = c;
                    }
                }
            }
        }
    for (i = 0; i <= n - 1; i++)
        printf ("%s\n", id[i]);
}

