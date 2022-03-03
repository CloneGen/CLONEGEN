int main () {
    char str [100];
    cin.getline (str, 100);
    char *p = str, *q = NULL;
    for (p = str; *p != '\0'; p++) {
        if (*p == ' ') {
            for (q = p + 1; *q == ' '; q++)
                *q = '0';
        }
    }
    for (p = str; *p != '\0'; p++) {
        if (*p != '0')
            cout << *p;
    }
    cout << endl;
    return 0;
}

