int main () {
    char str [100];
    int num [100], num1 [100];
    int i, r, len;
    cin.getline (str, 100);
    len = strlen (str);
    for (i = 0; i < len; i++) {
        num[i] = str[i] - '0';
    }
    if (len == 1) {
        cout << '0' << endl << num[0] << endl;
    }
    else {
        num1[0] = (num[0] * 10 + num[1]) / 13;
        r = (num[0] * 10 + num[1]) % 13;
        for (i = 2; i < len; i++) {
            num1[i - 1] = (r * 10 + num[i]) / 13;
            r = (r * 10 + num[i]) % 13;
        }
        int flag = 1;
        for (i = (num1[0] == 0); i < len - 1; i++) {
            cout << num1[i];
            flag = 0;
        }
        if (flag) {
            cout << '0';
        }
        cout << endl << r << endl;
    }
    return 0;
}

