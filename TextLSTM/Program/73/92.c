void main () {
    int m [5] [5], r [5], l [5], i, j, k;
    for (i = 0; i < 5; i++) {
        k = 0;
        for (j = 0; j < 5; j++) {
            scanf ("%d", &m[i][j]);
            if (m[i][j] > m[i][k])
                k = j;
        }
        r[i] = k;
    }
    for (j = 0; j < 5; j++) {
        k = 0;
        for (i = 0; i < 5; i++)
            if (m[i][j] < m[k][j])
                k = i;
        l[j] = k;
    }
    for (i = 0; i < 5; i++)
        if (l[r[i]] == i)
            break;
    if (i == 5)
        printf ("not found");
    else
        printf ("%d %d %d", i + 1, r[i] + 1, m[i][r[i]]);
}

