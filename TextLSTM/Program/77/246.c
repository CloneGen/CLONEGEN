void paidui (char str [], const  char f, const  char m);

int main () {
    char str [1000] = {'0'};
    char f, m;
    int a [1000] = {0}, i = 0, j = 0;
    cin.getline (str, 1000);
    m = str[0];
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != m) {
            f = str[i];
            break;
        }
    }
    paidui (str, f, m);
    return 0;
}

void paidui (char str [], const  char f, const  char m) {
    int i = 0, flag1 = -1, flag2 = -1;
    if (str[0] == '0')
        exit (1);
    else {
        while (str[i] != '\0') {
            if (str[i] == m)
                flag1 = i;
            if (str[i] == f)
                flag2 = i;
            if (flag1 >= 0 && flag2 >= 0) {
                cout << flag1 << " " << flag2 << endl;
                str[flag1] = '0';
                str[flag2] = '0';
                paidui (str, f, m);
            }
            i++;
        }
    }
}

