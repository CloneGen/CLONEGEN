int main () {
    char str [100];
    cin.getline (str, 100);
    char *p = str, *q = NULL;
    int flag = 0;
    for (p = str; *p != '\0'; p++) {
        if (*p == ' ' && flag == 1) {
            for (q = p; *q != '\0'; q++)
                *q = *(q + 1);
            *q = '\0';
            p--;
        }
        else if (*p == ' ' && flag == 0)
            flag = 1;
        else
            flag = 0;
    }
    *p = '\0';
    cout << str;
    return 0;
}

