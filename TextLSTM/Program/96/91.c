main () {
    char num [100], ans [100];
    int i, j, k, t;
    char s;
    for (i = 0; i < 100; i++) {
        ans[i] = '\0';
    }
    scanf ("%s", num);
    for (i = 0; num[i] != '\0'; i++) {
    }
    if (i <= 1)
        printf ("0\n%s", num);
    else {
        j = (num[0] - '0') * 10 + num[1] - '0';
        if ((i == 2) && (j <= 13))
            printf ("0\n%s", num);
        else {
            for (j = 0; j < i - 2; j++) {
                k = (num[j] - '0') * 10 + num[j + 1] - '0';
                num[j + 1] = k % 13 + '0';
                k = k / 13;
                s = k + '0';
                ans[j] = s;
            }
            k = (num[i - 2] - '0') * 10 + num[i - 1] - '0';
            t = k % 13;
            k = k / 13;
            s = k + '0';
            ans[j] = s;
            if (ans[0] == '0') {
                for (j = 0; j < 100; j++) {
                    ans[j] = ans[j + 1];
                }
            }
            printf ("%s\n%d", ans, t);
        }
    }
}

