int main () {
    char a [202] = {'\0'};
    char *p;
    int i;
    gets (a);
    p = a;
    for (i = 0; i < 202; i++) {
        if (*(p + i) == '\0')
            break;
        if (*(p + i) != ' ' || (*(p + i) == ' ' && *(p + i + 1) != ' '))
            cout << *(p + i);
    }
    cout << endl;
    return 0;
}

