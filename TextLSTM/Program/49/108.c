int huiwen (char a []) {
    char b [100] = {0};
    int i, l;
    l = strlen (a);
    for (i = 0; i < l; i++)
        b[l - 1 - i] = a[i];
    if (strcmp (b, a) == 0)
        return 1;
    return 0;
}

int main () {
    char a [100], s [100];
    cin >> a;
    int l, la = strlen (a), k = 0, p = 0;
    for (l = 2; l <= la; l++) {
        for (int i = 0;
        i <= la - l; i++) {
            for (int j = i;
            j < l + i; j++) {
                s[p] = a[j];
                p++;
            }
            s[p] = '\0';
            if (huiwen (s))
                cout << s << endl;
            p = 0;
        }
    }
    return 0;
}

