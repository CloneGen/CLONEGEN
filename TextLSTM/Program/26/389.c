int main () {
    char str [110];
    int num = 0;
    int i, x;
    char *p = str;
    cin.getline (str, 110);
    for (i = 0; *p != '\0'; p++, i++) {
        if (*p == ' ') {
            for (x = i;; x++, p++) {
                if (str[x] != ' ')
                    break;
            }
            cout << ' ';
            i = x;
        }
        if (*p != ' ')
            cout << *p;
    }
    return 0;
}

