int main () {
    int a = 0, b = 0, shijinzhi = 0, weishu = 0, i = 0, j = 0, shuchu [1000];
    char shuru [1000] = "abcdefg";
    cin >> a;
    cin >> shuru;
    cin >> b;
    weishu = strlen (shuru);
    for (i = 0; i <= weishu - 1; i++) {
        if (('A' <= shuru[i]) && (shuru[i] <= 'Z'))
            shuru[i] = shuru[i] - 'A' + 10;
        else if (('a' <= shuru[i]) && (shuru[i] <= 'z'))
            shuru[i] = shuru[i] - 'a' + 10;
        else if (('0' <= shuru[i]) && (shuru[i] <= '9'))
            shuru[i] = shuru[i] - '0';
    }
    for (i = 0; i <= weishu - 1; i++) {
        shijinzhi = shijinzhi + (int) (shuru[i] * pow (1.0 * a, 1.0 * (weishu - i - 1)));
    }
    if (shijinzhi == 0)
        printf ("%d", shijinzhi);
    if (shijinzhi != 0) {
        for (i = 0; shijinzhi != 0; i++) {
            shuchu[i] = shijinzhi % b;
            shijinzhi = shijinzhi / b;
        }
        for (j = i - 1; j >= 0; j--) {
            if ((0 <= shuchu[j]) && (shuchu[j] <= 9))
                printf ("%d", shuchu[j]);
            else if (shuchu[j] >= 10) {
                shuchu[j] = shuchu[j] + 'A' - 10;
                printf ("%c", shuchu[j]);
            }
        }
    }
    printf ("\n");
    return 0;
}

