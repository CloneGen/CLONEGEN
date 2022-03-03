int match (char *a) {
    int i = 1;
    while (a[i] != '\0') {
        if (a[i] == ')') {
            a[i] = ' ';
            a[0] = ' ';
            return i;
        }
        else if (a[i] == '(') {
            a[i] = '$';
            i += match (a + i);
        }
        else
            a[i] = ' ';
        i++;
    }
    return i - 1;
}

int main () {
    while (cin.peek () != EOF) {
        char ch [110];
        cin.getline (ch, 110, '\n');
        cout << ch << endl;
        int i = 0;
        while (ch[i] != '\0') {
            if (ch[i] == '(') {
                ch[i] = '$';
                i += match (ch + i);
            }
            else if (ch[i] == ')')
                ch[i] = '?';
            else
                ch[i] = ' ';
            i++;
        }
        cout << ch << endl;
    }
    return 0;
}

