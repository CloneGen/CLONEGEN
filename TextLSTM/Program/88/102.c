int main () {
    char str [31], *p = NULL;
    int l, flag = 0;
    cin.getline (str, 31);
    l = strlen (str);
    for (p = str; p < str + l; p++) {
        if (*p >= '0' && *p <= '9') {
            flag = 1;
            cout << *p;
        }
        else {
            if (flag == 1) {
                cout << endl;
                flag = 0;
            }
        }
    }
    return 0;
}

