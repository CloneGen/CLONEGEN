void main () {
    int j, b, a, i, x = 0, y, z = 1, m, n, s, t;
    scanf ("%d", &a);
    char j_shu [65] [101], b_shu [65] [101], shu [65] [101];
    for (i = 0; i < a; i++) {
        j = 0;
        while (1) {
            if ((y = getchar ()) != '\n')
                j_shu[i][j++] = y;
            else if (j > 0) {
                j_shu[i][j] = '\0';
                break;
            }
        }
        b = 0;
        while (1) {
            if ((y = getchar ()) != '\n')
                b_shu[i][b++] = y;
            else if (b > 0) {
                b_shu[i][b] = '\0';
                break;
            }
        }
        m = strlen (j_shu[i]);
        n = strlen (b_shu[i]);
        b_shu[i][m] = '\0';
        for (s = m - 1, t = n - 1; t >= 0; s--, t--) {
            if (j_shu[i][s] < b_shu[i][t]) {
                j_shu[i][s] = j_shu[i][s] + 10;
                j_shu[i][s - 1] = j_shu[i][s - 1] - 1;
            }
            shu[i][s] = j_shu[i][s] - b_shu[i][t];
        }
        for (; s >= 0; s--) {
            if (j_shu[i][s] < 0) {
                j_shu[i][s] = j_shu[i][s] + 10;
                j_shu[i][s - 1] = j_shu[i][s - 1] - 1;
            }
            shu[i][s] = j_shu[i][s] - 48;
        }
    }
    for (i = 0; i < a; i++) {
        m = strlen (j_shu[i]);
        for (s = 0, t = 0; s < m; s++)
            if (shu[i][s] == 0 && t == 0)
                continue;
            else if (shu[i][s] == 0)
                printf ("0");
            else {
                t++;
                printf ("%d", shu[i][s]);
            }
        if (t == 0)
            printf ("0");
        printf ("\n", m);
    }
}

