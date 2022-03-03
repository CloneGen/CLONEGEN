int main () {
    int t, i, j, k, num [100000] = {0}, flag = 0;
    char str [100000];
    cin >> t;
    cin.get ();
    for (i = 1; i <= t; i++) {
        cin.getline (str, 100000);
        for (j = 0; j < strlen (str); j++) {
            for (k = 0; k < strlen (str); k++) {
                if (str[j] == str[k]) {
                    num[j]++;
                }
            }
        }
        for (j = 0; j < strlen (str); j++) {
            if (num[j] == 1) {
                cout << str[j] << endl;
                flag = 1;
            }
            if (flag == 1)
                break;
        }
        if (flag == 0)
            cout << "no" << endl;
        flag = 0;
        memset (num, 0, sizeof (num));
    }
    return 0;
}

