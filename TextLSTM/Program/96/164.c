int main () {
    char a [100];
    int b [100];
    int n = 0, k, r;
    cin >> a;
    for (k = 0; a[k] != '\0'; k++)
        n++;
    if (n == 1) {
        cout << "0" << endl << a[0];
    }
    else if (n == 2) {
        r = (a[0] - '0') * 10 + a[1] - '0';
        b[0] = r / 13;
        r = r % 13;
        cout << b[0] << endl << r;
    }
    else if ((a[0] - '0') * 10 + a[1] - '0' >= 13) {
        r = (a[0] - '0') * 10 + a[1] - '0';
        for (k = 1; k <= n - 2; k++) {
            b[k] = r / 13;
            r = r % 13 * 10 + a[k + 1] - '0';
        }
        b[n - 1] = r / 13;
        r = r % 13;
        for (k = 1; k <= n - 1; k++) {
            cout << b[k];
        }
        cout << endl << r;
    }
    else {
        r = (a[0] - '0') * 100 + (a[1] - '0') * 10 + a[2] - '0';
        for (k = 2; k <= n - 2; k++) {
            b[k] = r / 13;
            r = r % 13 * 10 + a[k + 1] - '0';
        }
        b[n - 1] = r / 13;
        r = r % 13;
        for (k = 2; k <= n - 1; k++) {
            cout << b[k];
        }
        cout << endl << r;
    }
    return 0;
}

