int main () {
    char s [101], a [101], b [101];
    char m [101], n [101];
    int ls = 0, la = 0, lb = 0;
    int i, j, k;
    cin.getline (s, 101);
    cin.getline (a, 101);
    cin.getline (b, 101);
    ls = strlen (s);
    la = strlen (a);
    lb = strlen (b);
    for (i = 0; i < ls; i++) {
        if (s[i] != a[0])
            continue;
        for (j = i + 1; j < i + la; j++) {
            if (i != 0 && s[i - 1] != ' ')
                break;
            if (s[j] != a[j - i])
                break;
        }
        if (j == i + la) {
            for (k = 0; k < i; k++)
                m[k] = s[k];
            m[i] = '\0';
            strcpy (n, strcat (m, b));
            strcpy (s, strcat (n, s + (i + la)));
            i = i + lb;
        }
    }
    cout << s;
    return 0;
}

