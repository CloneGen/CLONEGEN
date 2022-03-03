int main () {
    int n, t, k;
    cin >> n;
    t = n;
    int a [n + 1];
    while (n >= 0) {
        char s [81];
        int i, l, m = 0;
        cin.getline (s, 81);
        l = strlen (s);
        if ((s[0] == '_') || (s[0] >= 'A' && s[0] <= 'Z' || (s[0] >= 'a' && s[0] <= 'z'))) {
            for (i = 1; i < l; i++) {
                if (s[i] == '_' || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                    m++;
                else
                    a[t - n] = 0;
            }
        }
        else
            a[t - n] = 0;
        if (m == l - 1)
            a[t - n] = 1;
        n--;
    }
    for (k = 1; k <= t; k++)
        cout << a[k] << endl;
    return 0;
}

