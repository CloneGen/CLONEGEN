int main () {
    int t, i, j, k;
    cin >> t;
    char str [100] [10000];
    for (i = 1; i <= t; i++) {
        cin >> str[i];
        for (j = 0; str[i][j] != '\0'; j++) {
            for (k = 0; str[i][k] != '\0'; k++) {
                if (j == k)
                    continue;
                if (str[i][k] == str[i][j])
                    break;
            }
            if (str[i][k] == '\0') {
                cout << str[i][j] << endl;
                break;
            }
        }
        if (str[i][j] == '\0')
            cout << "no" << endl;
    }
    return 0;
}

