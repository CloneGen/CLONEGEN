int main () {
    char a [101];
    cin.getline (a, 101);
    int i = 0, b [101], p, y, s [101];
    for (i = 0; i < strlen (a); i++) {
        b[i] = a[i] - '0';
    }
    if (strlen (a) == 1) {
        cout << "0" << endl;
        cout << b[0] << endl;
    }
    else {
        if (strlen (a) == 2 && b[0] * 10 + b[1] < 13) {
            cout << "0" << endl;
            cout << b[0] * 10 + b[1] << endl;
        }
        else {
            if (strlen (a) == 2 && b[0] * 10 + b[1] == 13) {
                cout << "1" << endl;
                cout << "0" << endl;
            }
            else {
                y = b[0];
                for (i = 0; i < strlen (a) - 1; i++) {
                    p = y * 10 + b[i + 1];
                    s[i] = p / 13;
                    y = p % 13;
                }
                if (s[0] != 0) {
                    for (i = 0; i < strlen (a) - 2; i++) {
                        cout << s[i];
                    }
                }
                else {
                    for (i = 1; i < strlen (a) - 2; i++) {
                        cout << s[i];
                    }
                }
                cout << s[strlen (a) - 2] << endl;
                cout << y << endl;
            }
        }
    }
    return 0;
}

