int main () {
    char word [100], *p = word;
    int chang = 0, n, len;
    cin >> n;
    cin >> p;
    cout << p;
    chang = strlen (p);
    n--;
    while (n > 0) {
        cin >> p;
        len = strlen (p);
        chang += len + 1;
        if (chang > 80) {
            cout << '\n' << p;
            chang = len;
        }
        else
            cout << ' ' << p;
        n--;
    }
    return 0;
}

