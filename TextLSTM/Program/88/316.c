int main () {
    char a [40], *X;
    X = a;
    cin.getline (a, 40);
    int len, i, j = 0, k;
    len = strlen (a);
    for (i = 0; i < len; i++) {
        if ((*(X +i) < '0' || *(X +i) > '9') && *(X +i) != '-') {
            *(X +i) = ' ';
        }
        if (*(X +i) == '-') {
            *(X +i) = ' ';
            for (j = i + 1; j < len; j++) {
                if (*(X +j) >= '0' && *(X +j) <= '9')
                    *(X +j) = ' ';
                else
                    break;
            }
        }
    }
    int x = 0, y = 0;
    for (i = 0; i < len; i++) {
        if (*(X +i) != ' ') {
            cout << *(X +i);
            x = 1;
            continue;
        }
        if (*(X +i) == ' ' && x == 1) {
            k = i;
            cout << endl;
            break;
        }
    }
    for (i = k + 1; i < len; i++) {
        if (a[i] != ' ') {
            cout << *(X +i);
            y = 1;
        }
        if (a[i] == ' ' && y == 1) {
            cout << endl;
            y = 0;
        }
    }
    return 0;
}

