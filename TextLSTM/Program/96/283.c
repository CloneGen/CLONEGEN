int main () {
    int i, q = 0, r, len;
    char n [110];
    cin >> n;
    len = strlen (n);
    if (len > 1) {
        q = ((n[0] - '0') * 10 + (n[1] - '0')) / 13;
        r = ((n[0] - '0') * 10 + (n[1] - '0')) % 13;
        if (q != 0 || len == 2)
            cout << q;
        for (i = 1; i < len - 1; i++) {
            q = (r * 10 + (n[i + 1] - '0')) / 13;
            r = (r * 10 + (n[i + 1] - '0')) % 13;
            cout << q;
        }
        cout << endl;
        cout << r << endl;
    }
    else {
        cout << '0' << endl;
        cout << n[0] << endl;
    }
    return 0;
}

