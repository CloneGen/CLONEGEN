main () {
    char ID [N] [L], IDup60 [N] [L], IDunder60 [N] [L], s [L];
    int b, h, i, j, k, l, m, max = 0, n, o, p, q, t = 0, u = 0, YearOld [N], YearOldup60 [N], id [N], idup60 [N];
    scanf ("%d", &n);
    for (h = 0; h < n; h++) {
        scanf ("%s %d", ID[h], &YearOld[h]);
        id[h] = 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; ID[i][j] != '\0'; j++) {
            id[i] = 10 * id[i];
            id[i] = id[i] + (ID[i][j] - '0');
        }
    }
    for (m = 0; m < n; m++) {
        if (YearOld[m] > max)
            max = YearOld[m];
    }
    for (k = 0; k <= max; k++) {
        for (l = 0; l < n; l++) {
            if (YearOld[l] == max - k && max - k >= 60) {
                YearOldup60[t] = YearOld[l];
                idup60[t] = id[l];
                strcpy (IDup60[t], ID[l]);
                t++;
            }
        }
    }
    for (b = 0; b < n; b++) {
        if (YearOld[b] < 60) {
            strcpy (IDunder60[u], ID[b]);
            u++;
        }
    }
    for (p = 0; p < t; p++) {
        printf ("%s\n", IDup60[p]);
    }
    for (q = 0; q < u; q++) {
        printf ("%s\n", IDunder60[q]);
    }
}

