void main () {
    char str [100] [50], result [100] [50];
    int m, length [100], i = 0, j, l, max, p, k, t;
    do {
        gets (str [i]);
        i++;
        m = strlen (str[i - 1]);
    }
    while (m != 0);
    l = i - 1;
    for (i = 0; i < l; i++) {
        length[i] = strlen (str[i]);
        max = str[i][0];
        p = 0;
        for (j = 1; j < length[i] - 4; j++) {
            if (str[i][j] > max) {
                max = str[i][j];
                p = j;
            }
        }
        for (j = 0; j <= p; j++)
            result[i][j] = str[i][j];
        for (j = p + 1; j <= p + 3; j++)
            result[i][j] = str[i][length[i] + j - p - 4];
        for (j = p + 4; j < length[i]; j++)
            result[i][j] = str[i][j - 3];
        for (j = length[i] - 1; j < 50; j++)
            result[i][j] = '\0';
    }
    for (j = 0; j < l; j++) {
        t = strlen (result[j]);
        for (k = 0; k < t; k++)
            printf ("%c", result[j][k]);
        printf ("\n");
    }
}

