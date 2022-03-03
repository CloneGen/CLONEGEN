int main () {
    int t, i, j;
    cin >> t;
    for (i = 0; i < t; i++) {
        char str [100000];
        cin >> str;
        int length = strlen (str);
        int times [26];
        memset (times, 0, sizeof (times));
        for (j = 0; j < length; j++) {
            times[str[j] - 'a']++;
        }
        for (j = 0; j < length; j++) {
            if (times[str[j] - 'a'] == 1) {
                cout << str[j] << endl;
                break;
            }
        }
        if (j == length)
            cout << "no" << endl;
    }
    return 0;
}

