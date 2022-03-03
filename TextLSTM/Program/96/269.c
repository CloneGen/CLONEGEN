int main () {
    char num [101];
    int quot [101], r, i, temp, weishu = 0;
    cin >> num;
    if (num[1] == '\0' || (num[0] == '1' && (num[1] == '0' || num[1] == '1' || num[1] == '2') && num[2] == '\0')) {
        cout << 0 << endl << num;
    }
    else {
        r = num[0] - '0';
        for (i = 0; num[i + 1] != '\0'; i++) {
            temp = r * 10 + num[i + 1] - '0';
            r = temp % 13;
            quot[i] = (temp - r) / 13;
            weishu++;
            temp = 0;
        }
        if (quot[0] != 0) {
            cout << quot[0];
        }
        for (i = 1; i < weishu; i++) {
            cout << quot[i];
        }
        cout << endl << r << endl;
    }
    return 0;
}

