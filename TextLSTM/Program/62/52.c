int main () {
    int i = 0;
    char *p, *m;
    char str [100];
    gets (str);
    m = str;
    p = str;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            *p = ' ';
            p++;
            while (str[i] == ' ')
                i++;
            *p = str[i];
        }
        else {
            *p = str[i];
            p++;
            i++;
        }
    }
    *p = '\0';
    cout << m << endl;
    return 0;
}

