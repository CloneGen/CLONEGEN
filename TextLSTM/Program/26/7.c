int main () {
    int i = 0, j = 0, lena = 0;
    char str [102];
    cin.getline (str, 102);
    lena = strlen (str);
    for (i = 0; i <= lena - 1; i++) {
        if (str[i] != ' ' || (str[i] == ' ' && str[i + 1] != ' '))
            cout << str[i];
    }
    return 0;
}

