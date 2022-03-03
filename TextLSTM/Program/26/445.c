int main () {
    char str [100] = {' '};
    int i, l;
    cin.getline (str, 100, '\n');
    l = strlen (str);
    for (i = 0; i < l; i++) {
        if (str[i] != ' ')
            cout << str[i];
        else if ((str[i + 1] != ' ') && (str[i - 1] != ' '))
            cout << str[i];
        else if ((str[i + 1] == ' ') && (str[i - 1] != ' '))
            cout << str[i];
    }
    return 0;
}

