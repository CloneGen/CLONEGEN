int main () {
    char str [82];
    int len, i, n, j;
    cin >> n;
    cin.ignore ();
    for (i = 1; i <= n; i++) {
        memset (str, '\0', sizeof (str));
        cin.getline (str, 90);
        len = strlen (str);
        if (str[0] != '_' && (str[0] < 65 || (str[0] > 90 && str[0] < 97) || str[0] > 122)) {
            cout << 0 << endl;
            continue;
        }
        for (j = 1; j < len; j++) {
            if (str[j] != '_' && (str[j] < 48 || (str[j] > 57 && str[j] < 65) || (str[j] > 90 && str[j] < 97) || str[j] > 122)) {
                cout << 0 << endl;
                break;
            }
        }
        if (j == len)
            cout << 1 << endl;
    }
    return 0;
}

