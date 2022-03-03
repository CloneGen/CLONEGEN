int main () {
    int n, i, j, m, len, count [26];
    char a [100000];
    cin >> n;
    cin.get ();
    for (m = 1; m <= n; m++) {
        memset (count, 0, sizeof (count));
        memset (a, 0, sizeof (a));
        cin.getline (a, 100000);
        len = strlen (a);
        for (i = 0; i < len; i++) {
            count[a[i] - 'a']++;
        }
        for (j = 0; j < len; j++) {
            if (count[a[j] - 'a'] == 1) {
                cout << a[j] << endl;
                break;
            }
        }
        if (j == len)
            cout << "no" << endl;
    }
    return 0;
}

