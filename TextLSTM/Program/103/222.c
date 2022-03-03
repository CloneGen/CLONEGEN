int main () {
    int i, s = 0;
    char str [1100], t;
    cin >> str;
    for (i = 0; i < strlen (str); i++) {
        if (str[i] > 96)
            str[i] -= 32;
        if (str[i] == t)
            s++;
        else {
            if (i != 0)
                cout << s << ')';
            cout << '(' << str[i] << ',';
            t = str[i];
            s = 1;
        }
    }
    cout << s << ')' << endl;
    ;
    return 0;
}

