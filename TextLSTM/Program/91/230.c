int main () {
    int l, i;
    char s [110], s1 [110];
    gets (s);
    l = strlen (s);
    for (i = 0; i < l - 1; i++)
        s1[i] = s[i] + s[i + 1];
    s1[i] = s[i] + s[0];
    for (i = 0; i < l; i++)
        cout << s1[i];
    return 0;
}

