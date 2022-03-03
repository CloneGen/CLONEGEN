char str [100], s [100];

void match (int x) {
    int i;
    for (i = x - 1; i >= 0; --i)
        if (s[i] == '$') {
            s[x] = ' ';
            s[i] = ' ';
            break;
        }
}

int main () {
    int i, l;
    while (cin >> str) {
        l = strlen (str);
        s[l] = '\0';
        for (i = 0; i < l; ++i)
            s[i] = ' ';
        cout << str << endl;
        for (i = 0; i < l; ++i)
            switch (str[i]) {
            case '(' :
                s[i] = '$';
                break;
            case ')' :
                s[i] = '?';
                match (i);
                break;
            }
        cout << s << endl;
    }
    return 0;
}

