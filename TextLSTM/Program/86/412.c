int main () {
    int n, i = 0;
    cin >> n;
    int num [100] = {0};
    for (i = 1; i <= n; i++) {
        int str [20] = {0};
        int m = 0;
        cin >> m;
        if (m != 0) {
            for (int j = 1;
            j <= m; j++) {
                cin >> str[j];
            }
            while (num[i] == 0) {
                if (str[m] <= 63 - 3 * m) {
                    if (str[m] <= 60 - 3 * m) {
                        num[i] = 60 - 3 * m;
                    }
                    else {
                        num[i] = str[m];
                    }
                }
                else
                    m = m - 1;
            }
        }
        else {
            num[i] = 60;
        }
    }
    i = 1;
    for (i = 1; i <= n; i++) {
        cout << num[i] << endl;
    }
    return 0;
}

