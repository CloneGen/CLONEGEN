int main () {
    char s [101], s1 [101], *p = NULL, *q = NULL;
    cin.getline (s, 101);
    int i;
    for (i = 0; i < strlen (s) - 1; i++) {
        s1[i] = s[i] + s[i + 1];
        cout << s1[i];
    }
    s1[i] = s[i] + s[0];
    cout << s1[i];
    return 0;
}

