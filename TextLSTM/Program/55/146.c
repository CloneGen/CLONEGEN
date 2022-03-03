int main () {
    char str [50], dest [50] = {'\0'}, trans [36];
    int a, b, i, d, len;
    long num = 0;
    for (i = 0; i < 10; i++)
        trans[i] = '0' + i;
    for (i = 10; i < 36; i++)
        trans[i] = 'A' + i - 10;
    cin >> a >> str >> b;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            d = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'z')
            d = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            d = str[i] - 'A' + 10;
        num = num * a + d;
    }
    i = 0;
    do {
        dest[i++] = trans[num % b];
        num = num / b;
    }
    while (num != 0);
    len = strlen (dest);
    for (i = len - 1; i >= 0; i--)
        cout << dest[i];
    return 0;
}

