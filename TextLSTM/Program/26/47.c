int main () {
    char str [100] = {" "};
    int i = 0;
    cin.get (str, 100, '\n');
    for (i = 1; i < strlen (str) - 1; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ')
            str[i + 1] = '/';
        else if (str[i] == '/' && str[i + 1] == ' ')
            str[i + 1] = '/';
    }
    for (i = 0; i <= strlen (str) - 1; i++)
        if (str[i] != '/')
            cout << str[i];
    return 0;
}

