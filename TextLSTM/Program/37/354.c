int main () {
    int t = 0, i = 0, j = 0, k = 0, p = 0, len = 0, flag = 0;
    int b [26] = {0};
    char str [100000] = {0}, c [1000] = {0};
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> str;
        len = strlen (str);
        for (j = 0; j < len; j++)
            b[str[j] - 'a'] += 1;
        for (j = 0; j < 26; j++) {
            if (b[j] == 1)
                c[k++] = j + 'a';
        }
        if (k == 0)
            cout << "no" << endl;
        else {
            for (j = 0; j < len; j++) {
                for (p = 0; p < k; p++) {
                    if (c[p] == str[j]) {
                        cout << c[p] << endl;
                        flag = 1;
                        break;
                    }
                    if (flag == 1)
                        break;
                }
                if (flag == 1)
                    break;
            }
        }
        memset (str, 0, sizeof (str));
        memset (c, 0, sizeof (c));
        memset (b, 0, sizeof (b));
        j = 0;
        k = 0;
        p = 0;
        flag = 0;
    }
    return 0;
}

