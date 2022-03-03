int main () {
    char str [11], substr [4], *p1 = str, *p2 = substr;
    int i = 0, max = 0;
    char maxchar;
    while (cin >> str) {
        cin >> substr;
        maxchar = str[0];
        p1 = &str[0];
        for (i = 0; *(p1 + i) != '\0'; i++) {
            if (*(p1 + i) > maxchar) {
                maxchar = *(p1 + i);
                max = i;
            }
        }
        for (p1 = &str[0]; p1 <= &str[0] + max; p1++) {
            cout << *p1;
        }
        cout << p2;
        for (p1 = &str[0] + max + 1; *p1 != '\0'; p1++) {
            cout << *p1;
        }
        cout << endl;
    }
    return 0;
}

