int main () {
    int i, j, n;
    char a [200];
    while (cin.get (a, 200)) {
        n = strlen (a);
        for (i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
        for (i = 0; i < n; i++) {
            if (a[i] == '(')
                a[i] = '$';
            else if (a[i] == ')') {
                a[i] = '?';
                for (j = i - 1; j >= 0; j--) {
                    if (a[j] == '$') {
                        a[i] = ' ';
                        a[j] = ' ';
                        break;
                    }
                }
            }
            else
                a[i] = ' ';
        }
        for (i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
        cin.get ();
    }
    return 0;
}

