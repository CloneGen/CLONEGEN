int main () {
    char a [40];
    cin.getline (a, 40);
    int len, i, j = 0, k;
    len = strlen (a);
    for (i = 0; i < len; i++) {
        if ((a[i] < '0' || a[i] > '9') && a[i] != '-') {
            a[i] = ' ';
        }
        if (a[i] == '-') {
            a[i] = ' ';
            for (j = i + 1; j < len; j++) {
                if (a[j] >= '0' && a[j] <= '9')
                    a[j] = ' ';
                else
                    break;
            }
        }
    }
    int x = 0, y = 0;
    for (i = 0; i < len; i++) {
        if (a[i] != ' ') {
            cout << a[i];
            x = 1;
            continue;
        }
        if (a[i] == ' ' && x == 1) {
            k = i;
            cout << endl;
            break;
        }
    }
    for (i = k + 1; i < len; i++) {
        if (a[i] != ' ') {
            cout << a[i];
            y = 1;
        }
        if (a[i] == ' ' && y == 1) {
            cout << endl;
            y = 0;
        }
    }
    return 0;
}

