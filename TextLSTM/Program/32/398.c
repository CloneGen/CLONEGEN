int main () {
    int k, n;
    cin >> n;
    for (k = 1; k <= n; k++) {
        int a1 [201];
        int b1 [201];
        char a [201];
        char b [201];
        cin >> a >> b;
        int len1 = strlen (a);
        int len2 = strlen (b);
        memset (a1, 0, sizeof (a1));
        memset (b1, 0, sizeof (b1));
        int i, j = 0;
        for (i = len1 - 1; i >= 0; i--)
            a1[j++] = a[i] - '0';
        j = 0;
        for (i = len2 - 1; i >= 0; i--)
            b1[j++] = b[i] - '0';
        for (i = 0; i < len1; i++) {
            if (a1[i] >= b1[i]) {
                a1[i] = a1[i] - b1[i];
            }
            else if (a1[i] < b1[i]) {
                a1[i] = a1[i] + 10 - b1[i];
                a1[i + 1]--;
            }
        }
        i = len1;
        while (a1[i] == 0)
            i--;
        for (; i >= 0; i--)
            cout << a1[i];
        cout << endl;
    }
    return 0;
}

