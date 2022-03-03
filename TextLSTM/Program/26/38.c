int main () {
    char s [110];
    char *p = &s[0];
    int flag = 0;
    cin.getline (s, 110);
    while (*p != '\0') {
        if (*p == ' ' && flag == 0) {
            cout << *p;
            flag = 1;
        }
        else if (*p != ' ') {
            cout << *p;
            flag = 0;
        }
        p++;
    }
    return 0;
}

