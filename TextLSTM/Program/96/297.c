int main () {
    char a [101];
    int b [101], i = 0, r, c [100];
    cin >> a;
    int n = strlen (a);
    while (a[i] != '\0') {
        b[i] = a[i] - '0';
        i++;
    }
    r = b[0];
    if (n <= 2 && (b[0] * (n - 1) * 10 + b[1]) < 13) {
        cout << "0" << endl;
        for (i = 0; i < n; i++)
            cout << b[i];
    }
    else {
        for (i = 1; i < n; i++) {
            c[i] = (r * 10 + b[i]) / 13;
            if (c[i] == 0 && i == 1) {
                i++;
                c[i] = (r * 100 + b[1] * 10 + b[i]) / 13;
                r = (r * 100 + b[1] * 10 + b[i]) % 13;
            }
            else
                r = (r * 10 + b[i]) % 13;
        }
        if (c[1] == 0) {
            for (i = 2; i < n; i++)
                cout << c[i];
        }
        else {
            for (i = 1; i < n; i++)
                cout << c[i];
        }
        cout << endl << r;
    }
    return 0;
}

