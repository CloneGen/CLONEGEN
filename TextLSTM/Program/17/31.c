int main () {
    char kuohaoin [201] = {0}, kuohao1 [201] = {0}, kuohaoout [201] = {0};
    int i, j, len;
    while (cin >> kuohaoin) {
        len = strlen (kuohaoin);
        for (i = 0; i < len; i++) {
            kuohao1[i] = kuohaoin[i];
            kuohaoout[i] = ' ';
        }
        for (i = len - 1; i >= 0; i--) {
            if (kuohao1[i] == '(') {
                kuohaoout[i] = '$';
                for (j = i + 1; j < len; j++) {
                    if (kuohao1[j] == ')') {
                        kuohao1[j] = 's';
                        kuohaoout[i] = ' ';
                        kuohao1[i] = 's';
                        break;
                    }
                }
            }
        }
        for (i = 0; i < len; i++)
            if (kuohao1[i] == ')')
                kuohaoout[i] = '?';
        cout << kuohaoin << endl;
        cout << kuohaoout << endl;
        for (i = 0; i < len; i++) {
            kuohaoin[i] = 0;
            kuohao1[i] = 0;
            kuohaoout[i] = 0;
        }
    }
    return 0;
}

