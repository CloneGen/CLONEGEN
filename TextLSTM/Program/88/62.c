int main () {
    char str [31];
    cin.getline (str, 31);
    char *p = NULL;
    int flag = 0, first = 1;
    for (p = str; *p != '\0'; p++) {
        if (*p <= '9' && *p >= '0') {
            if (flag == 0) {
                if (first == 1) {
                    cout << *p;
                    first = 0;
                }
                else
                    cout << endl << *p;
            }
            else
                cout << *p;
            flag = 1;
        }
        else
            flag = 0;
    }
    return 0;
}

