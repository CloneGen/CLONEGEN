char *upper (char *str);

char *upper (char *str) {
    char *s = str;
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') {
            *s = *s - ('a' - 'A');
        }
        s++;
    }
    return str;
}

int main () {
    char s [100], m [100];
    gets (s);
    gets (m);
    int a = strcmp (upper (s), upper (m));
    if (a == 0)
        cout << "=" << endl;
    if (a > 0)
        cout << ">" << endl;
    if (a < 0)
        cout << "<" << endl;
    return 0;
}

