void main () {
    int len, i, flag = 0, j, count = 0;
    ;
    char a [305];
    gets (a);
    len = strlen (a);
    for (i = 1; i <= len; i++) {
        if ((a[i - 1] >= 'A' && a[i - 1] <= 'Z') || (a[i - 1] >= 'a' && a[i - 1] <= 'z')) {
            flag = 1;
        }
    }
    if (flag == 0) {
        printf ("No");
        return;
    }
    for (j = 1; j <= 26; j++) {
        count = 0;
        for (i = 1; i <= len; i++) {
            if (a[i - 1] == 'A' + j - 1) {
                count++;
            }
        }
        if (count != 0)
            printf ("%c=%d\n", 'A' + j - 1, count);
    }
    for (j = 1; j <= 26; j++) {
        count = 0;
        for (i = 1; i <= len; i++) {
            if (a[i - 1] == 'a' + j - 1) {
                count++;
            }
        }
        if (count != 0)
            printf ("%c=%d\n", 'a' + j - 1, count);
    }
}

