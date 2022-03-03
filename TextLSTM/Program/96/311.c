int main () {
    char a [150];
    int b [150] = {0};
    scanf ("%s", a);
    int u, v, w, al;
    al = strlen (a);
    int x = 0, y = 0;
    if (al >= 3) {
        if (x >= 13) {
            x = 10 * (a[0] - '0') + a[1] - '0';
            u = 0;
            while (u <= al - 3) {
                b[u] = x / 13;
                x = (x % 13) * 10 + (a[u + 2] - '0');
                u++;
            }
            b[al - 2] = x / 13;
            y = x % 13;
            for (u = 0; u <= al - 2; u++) {
                cout << b[u];
            }
            cout << endl;
            cout << y << endl;
        }
        if (x < 13) {
            x = 100 * (a[0] - '0') + 10 * (a[1] - '0') + a[2] - '0';
            u = 0;
            while (u <= al - 4) {
                b[u] = x / 13;
                x = (x % 13) * 10 + (a[u + 3] - '0');
                u++;
            }
            b[al - 3] = x / 13;
            y = x % 13;
            for (u = 0; u <= al - 3; u++) {
                cout << b[u];
            }
            cout << endl;
            cout << y << endl;
        }
    }
    if (al == 1) {
        cout << "0" << endl << a[0] - '0' << endl;
    }
    if (al == 2) {
        x = (a[0] - '0') * 10 + a[1] - '0';
        cout << x / 13 << endl << x % 13 << endl;
    }
    return 0;
}

