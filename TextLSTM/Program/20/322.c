void main () {
    int ceshi, i = 0, j, max, weizhi, chang, k;
    char str [30] [15] = {'\0'}, substr [30] [3] = {'\0'}, a [30] [18] = {'\0'};
    while (scanf ("%s %s", str[i], substr[i]) != EOF) {
        i++;
    }
    ceshi = i;
    for (i = 0; i < ceshi; i++) {
        max = str[i][0];
        weizhi = 0;
        for (j = 0; str[i][j] != '\0'; j++) {
            if (str[i][j] > max) {
                weizhi = j;
                max = str[i][j];
            }
        }
        strncpy (a[i], str[i], weizhi + 1);
        a[i][weizhi + 1] = '\0';
        strcat (a[i], substr[i]);
        for (j = 1; str[i][j + weizhi] != '\0'; j++) {
            a[i][weizhi + 3 + j] = str[i][j + weizhi];
        }
        chang = strlen (str[i]);
        a[i][chang + 3] = '\0';
        printf ("%s\n", a[i]);
    }
}

