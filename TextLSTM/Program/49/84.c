void find (char str [500]) {
    int i, j, k, t, length;
    length = strlen (str);
    for (i = 2; i <= length; i = i + 2) {
        for (j = 0; j < length - i + 1; j++) {
            for (k = j; k < j + i / 2; k++) {
                if (str[k] != str[2 * j + i - 1 - k])
                    break;
            }
            if (k == j + i / 2) {
                for (t = j; t < j + i; t++) {
                    cout << str[t];
                }
                cout << endl;
            }
        }
    }
}

int main () {
    char str [500];
    cin >> str;
    find (str);
    return 0;
}

