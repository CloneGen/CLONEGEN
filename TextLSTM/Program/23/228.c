int main () {
    char c, ch [100] [100] = {'\0'};
    int i = 0, j = 0;
    cin >> c;
    while (c != '\n') {
        if (c == ' ') {
            i++;
            j = 0;
            c = cin.get ();
        }
        ch[i][j] = c;
        j++;
        c = cin.get ();
    }
    for (; i >= 1; i--) {
        j = 0;
        while (ch[i][j] != '\0') {
            cout << ch[i][j];
            j++;
        }
        cout << " ";
    }
    j = 0;
    while (ch[0][j] != '\0') {
        cout << ch[0][j];
        j++;
    }
    return 0;
}

