int main () {
    char str [100000];
    int t, flag [26] = {0}, i = 0, j = 0;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> str;
        memset (flag, 0, sizeof (flag));
        for (j = 0; j < strlen (str); j++)
            flag[str[j] - 'a']++;
        for (j = 0; j < strlen (str); j++) {
            if (flag[str[j] - 'a'] == 1) {
                cout << str[j] << endl;
                break;
            }
            if (j == (strlen (str) - 1))
                cout << "no" << endl;
        }
    }
    return 0;
}

