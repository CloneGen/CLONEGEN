int main () {
    char a [100];
    int c, d, e, f, g, i, flag = 0;
    cin >> a;
    if (a[1] == '\0') {
        cout << 0 << endl;
        cout << a[0] - '0' << endl;
    }
    if (a[1] != '\0') {
        c = a[0] - '0';
        d = a[1] - '0';
        for (i = 1; a[i] != '\0'; i++) {
            e = c * 10 + d;
            f = e / 13;
            g = e % 13;
            if (flag == 0) {
                if (f == 0)
                    flag = 1;
                else {
                    cout << f;
                    flag = 1;
                }
            }
            else
                cout << f;
            c = g;
            d = a[i + 1] - '0';
        }
        if (a[2] == '\0' && (a[0] - '0') * 10 + a[1] - '0' < 13)
            cout << 0;
        cout << endl;
        cout << g << endl;
    }
    return 0;
}

