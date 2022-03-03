int main () {
    char str [501];
    int i, j, k, l, m, len;
    cin >> str;
    len = strlen (str);
    for (i = 2; i <= len; i++) {
        for (j = 0; j <= len - i; j++) {
            l = j + i / 2;
            for (k = j; k <= l; k++) {
                if (str[k] != str[2 * j + i - k - 1])
                    break;
            }
            if (k == l + 1) {
                for (m = j; m < j + i; m++)
                    cout << str[m];
                cout << endl;
            }
        }
    }
    return 0;
}

