int main () {
    int t, i;
    cin >> t;
    cin.get ();
    while (t--) {
        int count [26] = {0};
        char str [100000] = {0};
        cin.getline (str, 10000);
        for (i = 0; str[i] != '\0'; i++) {
            count[str[i] - 'a']++;
        }
        for (i = 0; str[i] != '\0'; i++) {
            if (count[str[i] - 'a'] == 1) {
                cout << str[i] << endl;
                break;
            }
        }
        if (i == strlen (str)) {
            cout << "no" << endl;
        }
    }
    return 0;
}

