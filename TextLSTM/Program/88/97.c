int main () {
    char str [30];
    cin.getline (str, 31);
    char *p = str;
    int flag = 0;
    for (p = str; *p != '\0'; p++) {
        if (*p >= '0' && *p <= '9') {
            cout << *p;
            flag = 1;
        }
        else {
            if (flag == 1) {
                cout << endl;
                flag = 0;
            }
        }
    }
    cout << endl;
    return 0;
}

