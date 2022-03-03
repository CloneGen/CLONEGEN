int main () {
    int i, r;
    char num [1000];
    cin >> num;
    int len = strlen (num);
    if (len == 1 || ((len == 2) && (num[0] == '1') && (num[1] < '3'))) {
        cout << 0 << endl;
        cout << num << endl;
    }
    else {
        if (((num[0] - '0') * 10 + (num[1] - '0')) / 13 != 0) {
            cout << ((num[0] - '0') * 10 + (num[1] - '0')) / 13;
            r = ((num[0] - '0') * 10 + (num[1] - '0')) % 13;
        }
        else
            r = ((num[0] - '0') * 10 + (num[1] - '0'));
        for (i = 2; i < len; i++) {
            cout << (r * 10 + num[i] - '0') / 13;
            r = (r * 10 + num[i] - '0') % 13;
        }
        cout << endl;
        cout << r << endl;
    }
    return 0;
}

