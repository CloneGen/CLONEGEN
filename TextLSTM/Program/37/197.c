int main () {
    int t, i, j, k, l, flag;
    char str [100000];
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> str;
        flag = 0;
        l = strlen (str);
        for (j = 0; j < l; j++) {
            for (k = 0; k < l; k++) {
                if ((str[j] == str[k]) && (j != k))
                    break;
            }
            if (k == l) {
                cout << str[j] << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "no" << endl;
    }
    return 0;
}

