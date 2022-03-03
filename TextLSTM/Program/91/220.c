int main () {
    char s [101], s1 [101];
    int i, len;
    cin.getline (s, 101);
    len = strlen (s);
    memset (s1, 0, 101);
    for (i = 0; i < len; i++) {
        if (i < len - 1)
            s1[i] = s[i] + s[i + 1];
        else
            s1[i] = s[i] + s[0];
    }
    cout << s1 << endl;
    return 0;
}

