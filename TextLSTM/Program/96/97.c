main () {
    char num [110];
    char shang [110];
    int yushu, i, j, m, n;
    gets (num);
    j = strlen (num);
    yushu = num[0] - '0';
    if (j == 1) {
        m = num[0] - '0';
        shang[0] = m / 13 + '0';
        shang[1] = '\0';
        yushu = m;
    }
    if (j == 2) {
        m = (num[0] - '0') * 10 + num[1] - '0';
        shang[0] = m / 13 + '0';
        shang[1] = '\0';
        yushu = m % 13;
    }
    if (j >= 3) {
        m = yushu * 10 + num[1] - '0';
        if (m >= 13) {
            for (i = 1; i <= j - 1; i++) {
                m = yushu * 10 + num[i] - '0';
                yushu = m % 13;
                shang[i - 1] = m / 13 + '0';
            }
            shang[j - 1] = '\0';
        }
        else {
            yushu = yushu * 10 + num[1] - '0';
            for (i = 2; i <= j - 1; i++) {
                m = yushu * 10 + num[i] - '0';
                yushu = m % 13;
                shang[i - 2] = m / 13 + '0';
            }
            shang[j - 2] = '\0';
        }
    }
    puts (shang);
    printf ("%d", yushu);
}

