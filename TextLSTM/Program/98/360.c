int main () {
    int n, i, row = 0, len = 0;
    char *p;
    cin >> n;
    getchar ();
    char a [n] [42];
    for (i = 0; i < n; i++) {
        cin.get (a[i], 42, ' ');
        getchar ();
    }
    for (i = 0; i < n; i++) {
        for (p = a[i]; *p != '\0'; p++, len++)
            ;
        if (row + len < 80) {
            if (row != 0)
                cout << ' ';
            for (p = a[i]; *p != '\0'; p++)
                cout << *p;
            if (row != 0)
                row += (len + 1);
            else
                row += len;
        }
        else {
            cout << endl;
            row = 0;
            for (p = a[i]; *p != '\0'; p++)
                cout << *p;
            row += len;
        }
        len = 0;
    }
    return 0;
}

