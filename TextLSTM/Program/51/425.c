int main () {
    int n, i, j, l;
    char s [MAX], zichuan [MAX] [MAX], temp [MAX];
    scanf ("%d", &n);
    getchar ();
    gets (s);
    int len = strlen (s);
    int k = 0;
    int count [500] = {0};
    for (j = 0; j < n; j++) {
        zichuan[0][j] = s[j];
    }
    zichuan[0][n] = 0;
    int flag;
    for (i = 1; i <= len - n; i++) {
        flag = 0;
        for (j = 0; j < n; j++) {
            temp[j] = s[j + i];
        }
        temp[n] = 0;
        for (l = 0; l <= k; l++) {
            if (strcmp (zichuan[l], temp) == 0) {
                count[l]++;
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            k++;
            strcpy (zichuan[k], temp);
        }
    }
    int maxcount = 0;
    for (i = 0; i <= k; i++) {
        if (count[i] > maxcount)
            maxcount = count[i];
    }
    maxcount++;
    if (maxcount == 1)
        printf ("NO");
    else {
        printf ("%d\n", maxcount);
        for (i = 0; i <= k; i++) {
            if (count[i] == maxcount - 1)
                printf ("%s\n", zichuan[i]);
        }
    }
    return 0;
}

