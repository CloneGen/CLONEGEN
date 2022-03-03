int main () {
    int n;
    char a [81], *p;
    cin >> n;
    getchar ();
    while (n--) {
        cin.getline (a, 81);
        p = a;
        if (*p != '_' && (*p > 'z' || *p < 'a') && (*p > 'Z' || *p < 'A')) {
            cout << '0' << endl;
            continue;
        }
        for (p = a + 1; *p != '\0'; p++) {
            if (*p != '_' && (*p > 'z' || *p < 'a') && (*p > '9' || *p < '0') && (*p > 'Z' || *p < 'A')) {
                cout << '0' << endl;
                break;
            }
        }
        if (*p == '\0')
            cout << '1' << endl;
    }
    return 0;
}

