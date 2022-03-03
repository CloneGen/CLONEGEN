int main () {
    char str [501];
    int checklen, strlen, i, j, temp;
    cin >> str;
    for (i = 0; str[i] != '\0'; i++) {
        strlen = i;
    }
    for (checklen = 2; checklen <= strlen + 1; checklen++) {
        for (i = 0; i <= strlen - checklen + 1; i++) {
            for (j = 0;; j++) {
                if ((str[i + j] == str[i + checklen - 1 - j]) && ((i + j) < (i + checklen - 1 - j)))
                    continue;
                else if (str[i + j] != str[i + checklen - 1 - j])
                    break;
                else if ((str[i + j] == str[i + checklen - 1 - j]) && ((i + j) >= (i + checklen - 1 - j))) {
                    temp = checklen;
                    for (temp = 0; temp <= checklen - 1; temp++) {
                        cout << str[i + temp];
                    }
                    cout << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

