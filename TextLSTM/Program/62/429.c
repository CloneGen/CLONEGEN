int main () {
    char str [201];
    char *p = NULL;
    gets (str);
    cout << str[0];
    for (p = str + 1; p < str + strlen (str); p++) {
        if (*p != ' ' || (*(p - 1) != ' '))
            cout << *p;
    }
    return 0;
}

