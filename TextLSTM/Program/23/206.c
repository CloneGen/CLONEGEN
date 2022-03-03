int main () {
    char str [102], temp;
    int i, j, len, m;
    int start, end, word = 0;
    cin.getline (str, 102);
    len = strlen (str);
    for (i = 0; i < len; i++) {
        if (str[i] == ' ')
            word = word + 1;
    }
    if (word != 0) {
        for (i = 0, j = len - 1; i < j; i++, j--) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
        start = 0;
        for (i = 0; i < len; i++) {
            if (str[i] == ' ') {
                end = i;
                for (j = start, m = end - 1; j < m; j++, m--) {
                    temp = str[j];
                    str[j] = str[m];
                    str[m] = temp;
                }
                start = i + 1;
            }
        }
        for (i = len - 1; i >= 0; i--) {
            if (str[i] == ' ') {
                for (j = len - 1, m = i + 1; j > m; j--, m++) {
                    temp = str[j];
                    str[j] = str[m];
                    str[m] = temp;
                }
                break;
            }
        }
        for (i = 0; i < len; i++) {
            cout << str[i];
        }
    }
    else {
        for (i = 0; i < len; i++) {
            cout << str[i];
        }
    }
    return 0;
}

