int main () {
    char str [110];
    int num = 0;
    int i, x;
    cin.getline (str, 110);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            for (x = i + 1;; x++) {
                if (str[x] != ' ')
                    break;
            }
            cout << ' ';
            i = x;
        }
        if (str[i] != ' ')
            cout << str[i];
    }
    return 0;
}

