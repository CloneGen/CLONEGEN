void main () {
    int n, i, sum, count = 0;
    char num [30] [21] = {'\0'};
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", num[i]);
    }
    for (i = 0; i < n; i++) {
        int tmp = 0, k = 0, len;
        len = strlen (num[i]);
        while (num[i][k] != '\0') {
            if (k == 0) {
                if ((num[i][k] >= 'A' && num[i][k] <= 'Z') || (num[i][k] >= 'a' && num[i][k] <= 'z') || num[i][k] == '_') {
                    tmp++;
                }
                else {
                    printf ("no\n");
                    break;
                }
            }
            else {
                if ((num[i][k] >= 'A' && num[i][k] <= 'Z') || (num[i][k] >= 'a' && num[i][k] <= 'z') || (num[i][k] >= '0' && num[i][k] <= '9') || num[i][k] == '_') {
                    tmp++;
                }
                else {
                    printf ("no\n");
                    break;
                }
            }
            k++;
        }
        if (tmp == len)
            printf ("yes\n");
    }
}

