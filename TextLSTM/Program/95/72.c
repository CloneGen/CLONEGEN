int main () {
    char a [80], ch;
    int len;
    gets (a);
    for (len = 0; a[len] != '\0'; ++len)
        ;
    for (int i = 0;
    i < len; ++i) {
        cin.get (ch);
        if (a[i] <= 'Z' && a[i] >= 'A' && ch >= 'a' && ch <= 'z')
            ch -= 32;
        if (a[i] >= 'a' && a[i] <= 'z' && ch <= 'Z' && ch >= 'A')
            ch += 32;
        if (a[i] > ch) {
            cout << '>';
            return 0;
        }
        if (a[i] < ch) {
            cout << '<';
            return 0;
        }
    }
    cout << '=';
    return 0;
}

