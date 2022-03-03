int main () {
    int t, i, j, k, n, p, q;
    char str [100000];
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> str;
        n = strlen (str);
        q = 0;
        for (j = 0; j < n; j++) {
            p = 0;
            for (k = 0; k < n; k++) {
                if (k != j) {
                    if (str[j] == str[k]) {
                        p = 1;
                        q = q + p;
                        break;
                    }
                }
            }
            if (p == 0) {
                cout << str[j] << endl;
                break;
            }
        }
        if (q == n)
            cout << "no" << endl;
    }
    return 0;
}

