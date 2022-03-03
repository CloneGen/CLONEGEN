int main () {
    int i, j, t, n1, n2;
    int k [100];
    char a [100] [100], b [100];
    i = 0;
    while (gets (a[i])) {
        k[i] = strlen (a[i]);
        if (k[i] == 0)
            break;
        i++;
    }
    t = i;
    for (i = 0; i < t; i++) {
        n1 = 0;
        n2 = 0;
        for (j = 0; j < k[i]; j++) {
            b[j] = ' ';
        }
        for (j = 0; j < k[i]; j++) {
            if (n1 < 0)
                n1 = 0;
            if (a[i][j] == '(') {
                n1++;
            }
            if (a[i][j] == ')') {
                if (n1 == 0) {
                    b[j] = '?';
                }
                n1--;
            }
        }
        for (j = k[i] - 1; j >= 0; j--) {
            if (n2 < 0)
                n2 = 0;
            if (a[i][j] == ')') {
                n2++;
            }
            if (a[i][j] == '(') {
                if (n2 == 0) {
                    b[j] = '$';
                }
                n2--;
            }
        }
        for (j = 0; j < k[i]; j++) {
            cout << a[i][j];
        }
        cout << endl;
        for (j = 0; j < k[i]; j++) {
            cout << b[j];
        }
        cout << endl;
    }
    return 0;
}

