int main () {
    int len, max = 0, mark, i, j;
    char str [14], substr [4];
    while (cin >> str >> substr) {
        len = strlen (str);
        for (i = 0; i < len; i++) {
            if (str[i] > max) {
                max = str[i];
                mark = i;
            }
        }
        max = 0;
        for (i = len - 1; i > mark; i--) {
            str[i + 3] = str[i];
        }
        for (i = mark + 1, j = 0; i < mark + 4; i++, j++) {
            str[i] = substr[j];
        }
        for (i = 0; i < len + 3; i++)
            cout << str[i];
        cout << endl;
    }
    return 0;
}

