int main () {
    char str [101], *p = NULL;
    int l, flag = 0;
    cin.get (str, 101);
    l = strlen (str);
    for (p = str; p < str + l; p++) {
        if (*p == ' ') {
            if (flag == 0) {
                cout << *p;
                flag = 1;
            }
        }
        else {
            flag = 0;
            cout << *p;
        }
    }
    return 0;
}

