void filter (char *p) {
    char *p1 = NULL;
    p1 = p;
    while (*p != 0) {
        while ((*p != ' ') && (*p != 0)) {
            *p1 = *p;
            cout << *p1;
            p1++;
            p++;
        }
        while ((*p == ' ')) {
            p++;
        }
        if ((p - p1 > 0) && (*p != 0)) {
            *p1++ = *(p - 1);
            cout << *(p1 - 1);
        }
    }
    cout << endl;
    return;
}

int main () {
    char str [105];
    cin.getline (str, 105);
    filter (str);
    return 0;
}

