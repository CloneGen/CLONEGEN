int main () {
    char str [30];
    gets (str);
    int len, flag;
    char *p = str;
    len = strlen (str);
    for (; p <= &str[len - 1]; p++) {
        if (*p == '-') {
            for (p++; p <= &str[len - 1]; p++) {
                if (*p >= 48 && *p <= 57)
                    continue;
                else {
                    cout << endl;
                    flag = 1;
                    break;
                }
            }
        }
        else {
            if (*p >= 48 && *p <= 57) {
                cout << *p;
                flag = 0;
            }
            else if (flag == 0) {
                cout << endl;
                flag++;
            }
        }
    }
    return 0;
}

