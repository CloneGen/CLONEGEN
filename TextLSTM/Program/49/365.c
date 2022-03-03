int main () {
    char str [500];
    int leap, i, length, k, j;
    for (i = 0;; i++) {
        cin.get (str[i]);
        if (str[i] == '\n') {
            length = i - 1;
            break;
        }
    }
    for (j = 1; j < length; j++)
        for (i = 0; i <= length - j; i++) {
            leap = 0;
            for (k = 0; k <= j / 2 + 1; k++)
                if (str[i + k] != str[i + j - k]) {
                    leap = 1;
                    break;
                }
            if (leap == 0) {
                for (k = i; k <= i + j; k++)
                    cout << str[k];
                cout << endl;
            }
        }
    return 0;
}

