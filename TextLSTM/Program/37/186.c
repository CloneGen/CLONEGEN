int main () {
    int t, i, len;
    int count [26];
    char a [100000];
    cin >> t;
    while (t--) {
        i = 0;
        cin >> a;
        memset (count, 0, sizeof (count));
        len = strlen (a);
        for (i = 0; i < len; i++)
            count[a[i] - 'a']++;
        for (i = 0; i < len; i++)
            if (count[a[i] - 'a'] == 1) {
                cout << a[i];
                break;
            }
        if (i == len)
            cout << "no";
        if (t >= 0)
            cout << endl;
    }
    return 0;
}

