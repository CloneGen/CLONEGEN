int main () {
    int a [110], b [110], c [110];
    char str1 [110], str2 [110];
    int n, i, j;
    int len1, len2;
    cin >> n;
    while (n--) {
        memset (a, 0, sizeof (a));
        memset (b, 0, sizeof (b));
        memset (c, 0, sizeof (c));
        cin >> str1 >> str2;
        len1 = strlen (str1);
        len2 = strlen (str2);
        j = 0;
        for (i = len1 - 1; i >= 0; i--)
            a[j++] = str1[i] - '0';
        j = 0;
        for (i = len2 - 1; i >= 0; i--)
            b[j++] = str2[i] - '0';
        for (i = 0; i < len1; i++) {
            c[i] += (a[i] - b[i]);
            if (c[i] < 0) {
                c[i + 1]--;
                c[i] += 10;
            }
        }
        i = len1 - 1;
        while (!c[i]) {
            i--;
            if (i == -1)
                break;
        }
        if (i == -1) {
            cout << 0 << endl;
            continue;
        }
        while (i >= 0) {
            cout << c[i];
            i--;
        }
        cout << endl;
    }
    return 0;
}

