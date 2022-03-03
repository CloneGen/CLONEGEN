int main () {
    char a [101];
    int s [101], len, k = 0, i;
    while (cin >> a) {
        for (len = 0; a[len] != '\0'; len++)
            ;
        cout << a << endl;
        for (i = 0; i < len; i++) {
            if (a[i] == '(')
                s[k++] = i;
            if (a[i] == ')' && k > 0) {
                a[s[--k]] = ' ';
                a[i] = ' ';
            }
            if (a[i] != '(' && a[i] != ')')
                a[i] = ' ';
            if (a[i] == ')' && k == 0)
                a[i] = '?';
        }
        for (i = k - 1; i >= 0; i--)
            a[s[i]] = '$';
        cout << a << endl;
        memset (a, 0, sizeof (a));
        k = 0;
    }
    return 0;
}

