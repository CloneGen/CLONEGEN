int main () {
    char str [101];
    char *p;
    int i;
    cin.getline (str, 101);
    p = str;
    for (i = 0; i < 101; i++) {
        if ((*(p + i) != '\0') && (*(p + i) != ' '))
            cout << *(p + i);
        if ((*(p + i) == ' ') && (*(p + i - 1) != ' '))
            cout << *(p + i);
        if (*(p + i) == '\0')
            break;
    }
    return 0;
}

