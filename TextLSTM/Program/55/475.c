int main () {
    char str [1000], num1 [1000];
    int a, b, len;
    int num = 0, i, j, p [1000];
    cin >> a >> str >> b;
    len = strlen (str);
    for (i = 0; i <= len - 1; i++) {
        if (str[i] > 47 && str[i] < 58) {
            str[i] = str[i] - 48;
        }
        else if (str[i] > 64 && str[i] < 91) {
            str[i] = str[i] - 55;
        }
        else if (str[i] > 96 && str[i] < 123) {
            str[i] = str[i] - 87;
        }
        p[i] = str[i];
        for (j = 1; j <= len - 1 - i; j++)
            p[i] = p[i] * a;
        num = num + p[i];
    }
    i = 0;
    do {
        num1[i] = num % b;
        if (num1[i] >= 0 && num1[i] <= 9)
            num1[i] = num1[i] + 48;
        else if (num1[i] >= 10 && num1[i] <= 35)
            num1[i] = num1[i] + 55;
        num = num / b;
        i = i + 1;
    }
    while (num != 0);
    for (j = i - 1; j >= 0; j--) {
        cout << num1[j];
    }
    cout << endl;
    return 0;
}

