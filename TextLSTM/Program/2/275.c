int main () {
    int m;
    cin >> m;
    char str [1000] [26];
    int a [1000], count [26] = {0};
    int t = 0;
    int shu = 0;
    for (int i = 0;
    i < m; i++) {
        t = 0;
        cin >> a[i];
        cin >> str[i];
        t = strlen (str[i]);
        for (int j = 0;
        j < t; j++) {
            shu = str[i][j] - 'A';
            count[shu]++;
        }
    }
    int max = count[0];
    int hao = 0;
    for (int k = 1;
    k < 26; k++) {
        if (count[k] > max) {
            max = count[k];
            hao = k;
        }
    }
    char c = hao + 'A';
    cout << c << endl;
    cout << max << endl;
    for (int l = 0;
    l < m; l++) {
        for (int o = 0;
        str[l][o] != '\0'; o++) {
            if (str[l][o] == c) {
                cout << a[l] << endl;
                break;
            }
        }
    }
    return 0;
}

