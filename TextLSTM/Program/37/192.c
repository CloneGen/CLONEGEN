int main () {
    int t, s, q;
    int i, j, k;
    int len;
    char str [100000];
    cin >> t;
    cin.get ();
    for (i = 1; i <= t; i++) {
        q = 0;
        cin.getline (str, 100000);
        len = strlen (str);
        for (j = 0; j < len; j++) {
            s = 1;
            if (str[j] >= 'a' && str[j] <= 'z') {
                for (k = j + 1; k < len; k++) {
                    if (str[k] == str[j]) {
                        s = 0;
                        str[k] = 0;
                    }
                }
                if (s == 1) {
                    cout << str[j] << endl;
                    q = 1;
                    break;
                }
            }
        }
        if (q == 0)
            cout << "no" << endl;
    }
    return 0;
}

