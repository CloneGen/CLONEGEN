int main () {
    char s [100], a [100], b [100];
    int i, j, len1, len2, k [100] = {0};
    gets (s);
    gets (a);
    gets (b);
    len1 = strlen (s);
    len2 = strlen (a);
    for (i = 0; i < len1; i++) {
        for (j = i; j < i + len2; j++) {
            if (s[j] == a[j - i])
                k[i] = k[i] + 1;
            else
                break;
        }
        if (k[i] == len2) {
            if (i == 0 && s[i + len2] == ' ') {
                cout << b;
                i = i + len2 - 1;
            }
            else if (i == len1 - len2 && s[i - 1] == ' ') {
                cout << b;
                i = i + len2 - 1;
            }
            else if (i > 0 && i < len1 - len2 && s[i - 1] == ' ' && s[i + len2] == ' ') {
                cout << b;
                i = i + len2 - 1;
            }
            else
                cout << s[i];
        }
        else
            cout << s[i];
    }
    return 0;
}

