int main () {
    char str [1001];
    cin >> str;
    int i, num = 1, len = strlen (str);
    if (str[0] > 96)
        str[0] -= 32;
    for (i = 1; i <= len; i++) {
        if (str[i] > 96)
            str[i] -= 32;
        if (str[i] == str[i - 1])
            num++;
        else {
            cout << '(' << str[i - 1] << ',' << num << ')';
            num = 1;
        }
    }
    return 0;
}

