int main () {
    char str [31];
    int i, j, l, a [31] = {0}, *p = a;
    cin.getline (str, 31);
    l = strlen (str);
    for (j = '0'; j <= '9'; j++) {
        if (str[0] == j) {
            cout << str[0];
            *p = 1;
            break;
        }
    }
    for (i = 1; i < l; i++) {
        for (j = '0'; j <= '9'; j++) {
            if (str[i] == j) {
                cout << str[i];
                *(p + i) = 1;
                break;
            }
        }
        if (*(p + i - 1) == 1 && j == '9' + 1)
            cout << endl;
    }
}

