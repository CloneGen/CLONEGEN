void check () {
    char array [103];
    while (cin) {
        cin.getline (array, 103);
        int i, j, len;
        len = strlen (array);
        for (i = 0; i < len; i++)
            cout << array[i];
        cout << endl;
        for (i = 0; i < len; i++) {
            if (array[i] == ')') {
                for (j = i - 1; j >= 0; j--) {
                    if (array[j] == '(') {
                        array[j] = '1';
                        array[i] = '1';
                        break;
                    }
                }
            }
        }
        for (i = 0; i < len; i++) {
            if (array[i] != '(' && array[i] != ')')
                cout << ' ';
            if (array[i] == '(')
                cout << '$';
            if (array[i] == ')')
                cout << '?';
        }
        cout << endl;
    }
    return;
}

int main () {
    check ();
    return 0;
}

