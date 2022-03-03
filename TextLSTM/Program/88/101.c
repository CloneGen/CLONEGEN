int main () {
    char *p;
    char str [50];
    cin.getline (str, 31);
    p = str;
    while (*p != 0) {
        while ((*p >= '0') && (*p <= '9')) {
            cout << *p;
            p++;
        }
        cout << endl;
        while (!((*p >= '0') && (*p <= '9')) && (*p != 0))
            p++;
    }
    return 0;
}

