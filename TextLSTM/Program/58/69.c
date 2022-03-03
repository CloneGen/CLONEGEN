int main () {
    int n, i, p = 1;
    cin >> n;
    cin.get ();
    char str [81];
    while (p <= n) {
        cin.getline (str, 81);
        if (str[0] >= 'a' && str[0] <= 'z' || str[0] >= 'A' && str[0] <= 'Z' || str[0] == '_') {
            if (strlen (str) == 1)
                cout << 1 << endl;
            for (i = 1; str[i] != '\0'; i++) {
                if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9' || str[i] == '_')) {
                    cout << 0 << endl;
                    break;
                }
                else if (i == strlen (str) - 1)
                    cout << 1 << endl;
            }
        }
        else
            cout << 0 << endl;
        p++;
    }
    return 0;
}

