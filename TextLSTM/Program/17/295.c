int main () {
    char c, a [105] = {'\0'}, sign [105] = {'\0'};
    int length, i, j;
    cin.getline (a, 101, '\n');
    while (a[0] != '\0') {
        length = strlen (a);
        cout << a << endl;
        for (i = 0; i < length; i++) {
            if (a[i] != ')')
                continue;
            else if (i > 0) {
                j = i - 1;
                while (j >= 0 && a[j] != '(')
                    j--;
                if (a[j] == '(') {
                    a[i] = '\0';
                    a[j] = '\0';
                }
            }
        }
        for (i = 0; i < length; i++) {
            if (a[i] == '(')
                sign[i] = '$';
            else {
                if (a[i] == ')')
                    sign[i] = '?';
                else
                    sign[i] = ' ';
            }
        }
        cout << sign;
        for (i = 0; i < 105; i++) {
            a[i] = '\0';
            sign[i] = '\0';
        }
        cin.getline (a, 101, '\n');
        if (a[0] != '\0')
            cout << endl;
    }
    return 0;
}

