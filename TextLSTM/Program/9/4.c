void main () {
    int n, age [100] = {0}, i, j, k, old [101] = {0}, oldn, youngn;
    char id [101] [20] = {0}, oldid [101] [20] = {0}, youngid [101] [20] = {0};
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        scanf ("%s%d", id[i], &age[i]);
    for (i = 1, j = 1, k = 1; i <= n; i++) {
        if (age[i] >= 60) {
            old[j] = age[i];
            strcpy (oldid[j], id[i]);
            j++;
        }
        else {
            strcpy (youngid[k], id[i]);
            k++;
        }
    }
    oldn = j;
    youngn = k;
    for (i = 1; i <= oldn; i++) {
        for (j = 1; j <= oldn - i; j++) {
            if (old[j] < old[j + 1]) {
                old[100] = old[j];
                old[j] = old[j + 1];
                old[j + 1] = old[100];
                strcpy (oldid[101], oldid[j]);
                strcpy (oldid[j], oldid[j + 1]);
                strcpy (oldid[j + 1], oldid[101]);
            }
        }
    }
    for (i = 1; i < oldn; i++)
        printf ("%s\n", oldid[i]);
    for (k = 1; k < youngn; k++)
        printf ("%s\n", youngid[k]);
}

