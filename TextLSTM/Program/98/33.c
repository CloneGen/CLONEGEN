int main () {
    int n = 0, num = 0, i = 0;
    char a [10000] = {'\0'}, *p = a;
    cin >> n;
    cin.get ();
    char c = getchar ();
    while (c != '\n') {
        *p++ = c;
        num++;
        c = getchar ();
    }
    p = a + 80;
    while (*p != '\0') {
        while (*p != ' ' && p < a + num - 1) {
            p--;
        }
        *p = '\n';
        p = p + 81;
    }
    p = a + num - 1;
    while (*p == ' ') {
        *p = '\0';
        p--;
    }
    for (p = a; *p != '\0'; p++)
        cout << *p;
    return 0;
}

