int main () {
    char string [1000];
    int i = 0, j = 0, length = 0, t1 = 0, t2 = 0;
    int flag = 0, left = 0, right = 0;
    while (gets (string)) {
        cout << string << endl;
        length = strlen (string);
        flag = 1, left = 0, right = 0;
        t1 = 0, t2 = 0;
        while (flag == 1) {
            for (i = 0; i < length; i++) {
                if (string[i] == '(') {
                    left = i;
                    t1 = 1;
                }
                else if (t1 == 1 && string[i] == ')') {
                    right = i;
                    t2 = 1;
                    break;
                }
                else
                    continue;
            }
            if (t1 == 1 && t2 == 1) {
                string[left] = '0';
                string[right] = '0';
                t1 = 0;
                t2 = 0;
                flag = 1;
            }
            else
                flag = 0;
        }
        for (i = 0; i < length; i++) {
            if (string[i] == '(')
                string[i] = '$';
            else if (string[i] == ')')
                string[i] = '?';
            else
                string[i] = ' ';
        }
        for (i = 0; i < length; i++) {
            cout << string[i];
        }
        cout << endl;
    }
    return 0;
}

