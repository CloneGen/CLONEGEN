void main () {
    int n, i, j, k;
    char str [100] [100];
    scanf ("%d", &n);
    gets (str [0]);
    for (i = 0; i < n; i++)
        gets (str[i]);
    for (i = 0; i < n - 1; i++) {
        k = 1;
        for (j = 0; str[i][j] != '\0'; j++) {
            if (j == 0)
                if ((str[i][j] > 'z' || str[i][j] < 'a') && (str[i][j] > 'Z' || str[i][j] < 'A') && str[i][j] != '_') {
                    printf ("0\n");
                    k = 0;
                    break;
                }
            if (j != 0)
                if ((str[i][j] > 'z' || str[i][j] < 'a') && (str[i][j] > 'Z' || str[i][j] < 'A') && (str[i][j] < '0' || str[i][j] > '9') && str[i][j] != '_') {
                    printf ("0\n");
                    k = 0;
                    break;
                }
        }
        if (k)
            printf ("1\n");
    }
    k = 1;
    for (j = 0; str[n - 1][j] != '\0'; j++) {
        if (j == 0)
            if ((str[i][j] > 'z' || str[i][j] < 'a') && (str[i][j] > 'Z' || str[i][j] < 'A') && str[i][j] != '_') {
                printf ("0");
                k = 0;
                break;
            }
        if (j != 0)
            if ((str[i][j] > 'z' || str[i][j] < 'a') && (str[i][j] > 'Z' || str[i][j] < 'A') && (str[i][j] < '0' || str[i][j] > '9') && str[i][j] != '_') {
                printf ("0");
                k = 0;
                break;
            }
    }
    if (k)
        printf ("1");
}

