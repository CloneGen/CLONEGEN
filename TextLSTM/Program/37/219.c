int main () {
    char a [100001];
    int count [26];
    int i, j, t;
    cin >> t;
    for (j = 1; j <= t; j++) {
        cin >> a;
        memset (count, 0, sizeof (count));
        for (i = 0; a[i] != '\0'; i++)
            count[a[i] - 'a']++;
        for (i = 0; a[i] != '\0'; i++)
            if (count[a[i] - 'a'] == 1) {
                cout << a[i] << endl;
                break;
            }
        if (a[i] == '\0')
            cout << "no" << endl;
    }
    return 0;
}

