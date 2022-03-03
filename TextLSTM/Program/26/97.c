int main () {
    char *p, str [101];
    int flag = 0;
    cin.getline (str, 101);
    p = str;
    for (; *p != 0; p++) {
        if (*p == ' ')
            if (flag == 0) {
                cout << *p;
                flag = 1;
            }
        if (*p != ' ') {
            cout << *p;
            flag = 0;
        }
    }
    cout << endl;
    return 0;
}

