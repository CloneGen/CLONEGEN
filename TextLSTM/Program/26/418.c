int main () {
    char str [1000];
    char *p;
    cin.getline (str, 1000);
    p = str;
    while (*p != '\0') {
        while ((*p != ' ') && (*p != '\0')) {
            cout << *p;
            p++;
        }
        if (*p == '\0')
            break;
        while ((*p == ' ') && (*p != '\0'))
            p++;
        if (*p == '\0')
            break;
        else
            cout << ' ';
    }
    return 0;
}

