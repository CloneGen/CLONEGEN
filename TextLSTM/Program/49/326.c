int main () {
    char str [501];
    int len;
    int i, j, k, l;
    cin >> str;
    len = strlen (str);
    for (i = 2; i <= len; i++) {
        for (j = 0; j <= len - i; j++) {
            for (k = 1; k <= i / 2; k++) {
                if (str[j + k - 1] != str[j + i - k])
                    break;
            }
            if (k == i / 2 + 1) {
                for (l = j; l < j + i; l++) {
                    cout << str[l];
                }
                cout << endl;
            }
        }
    }
    return 0;
}

