int main () {
    char a [100];
    int i, k, s;
    for (; scanf ("%s", a) != EOF;) {
        s = 0;
        s = strlen (a);
        for (i = 0; i < s; i++)
            cout << a[i];
        cout << endl;
        for (i = 0; i < s; i++) {
            if (a[i] == '(')
                a[i] = '$';
            else if (a[i] == ')')
                a[i] = '?';
            else
                a[i] = ' ';
        }
        for (i = s - 1; i >= 0; i--) {
            if (a[i] == '$') {
                for (k = i; k < s; k++) {
                    if (a[k] == '?') {
                        a[i] = ' ';
                        a[k] = ' ';
                        break;
                    }
                }
            }
        }
        for (i = 0; i < s; i++)
            cout << a[i];
        cout << endl;
    }
    return 0;
}

