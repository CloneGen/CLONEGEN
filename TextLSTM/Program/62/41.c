int main () {
    int i = 0, flag = 0;
    char word [100];
    cin.getline (word, 200);
    char *p = word;
    for (i = 0; *(p + i) != '\0'; i++) {
        if (flag == 0 && *(p + i) == ' ')
            flag = 1;
        else if (flag == 1 && *(p + i) == ' ')
            *(p + i) = '[';
        else if (flag == 1 && *(p + i) != ' ')
            flag = 0;
    }
    for (i = 0; *(p + i) != '\0'; i++)
        if (*(p + i) != '[')
            cout << *(p + i);
    return 0;
}

