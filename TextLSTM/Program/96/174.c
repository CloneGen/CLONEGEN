int main () {
    int s [101] = {0}, N [101] = {0}, y, i, j;
    char str [101];
    cin >> str;
    for (i = 0; i < strlen (str); i++)
        N[i] = str[i] - '0';
    if (strlen (str) != 1) {
        for (i = 0; i < strlen (str) - 1; i++) {
            s[i] = (N[i] * 10 + N[i + 1]) / 13;
            y = (N[i] * 10 + N[i + 1]) % 13;
            N[i + 1] = y;
        }
        if (strlen (str) >= 3) {
            if (s[0] != 0)
                cout << s[0];
            for (i = 1; i < strlen (str) - 2; i++)
                cout << s[i];
            cout << s[strlen (str) - 2] << endl;
        }
        else
            cout << s[0] << endl;
        cout << y << endl;
    }
    else {
        cout << "0" << endl;
        cout << N[0] << endl;
    }
    return 0;
}

