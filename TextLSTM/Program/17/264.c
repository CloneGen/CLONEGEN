void find (char a [], int n, int m) {
    int i;
    if (a[m] != ')' && m < n) {
        find (a, n, m + 1);
    }
    if (a[m] == ')' && m < n) {
        for (i = m; i >= 0; i--) {
            if (a[i] == '(') {
                a[i] = ' ';
                a[m] = ' ';
                break;
            }
        }
        find (a, n, m + 1);
    }
}

int main () {
    int n;
    char a [200];
    while (cin >> a) {
        cout << a << endl;
        n = strlen (a);
        find (a, n, 0);
        for (int k = 0;
        k < n; k++) {
            if (a[k] == '(') {
                a[k] = '$';
            }
            else {
                if (a[k] == ')') {
                    a[k] = '?';
                }
                else {
                    if (a[k] != '(' && a[k] != ')') {
                        a[k] = ' ';
                    }
                }
            }
        }
        cout << a << endl;
    }
    return 0;
}

