int main () {
    char s [101], s1 [100];
    int i, l;
    gets (s);
    l = strlen (s);
    for (i = 0; i < l - 1; i++)
        s1[i] = s[i] + s[i + 1];
    s1[l - 1] = s[l - 1] + s[0];
    for (i = 0; i < l; i++)
        cout << s1[i];
    cout << endl;
    return 0;
}

