int main () {
    int l;
    char str [30], str2 [30];
    gets (str);
    l = strlen (str);
    int k = 0;
    char *p;
    p = str;
    for (int i = 0;
    i < l; i++) {
        if (*(p + i) < '9' + 1 && *(p + i) > '0' - 1) {
            str2[k] = *(p + i);
            k++;
            str2[k] = '\0';
            if (*(p + i + 1) > '9' || *(p + i + 1) < '0') {
                cout << str2 << endl;
                k = 0;
            }
        }
    }
    return 0;
}

