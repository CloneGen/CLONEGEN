int main () {
    char s [101], s1 [101];
    int i;
    int m, l;
    cin.getline (s, 101);
    l = strlen (s);
    for (i = 0; i < l; i++) {
        if (i < l - 1)
            m = s[i] + s[i + 1];
        else
            m = s[i] + s[0];
        s1[i] = m;
        cout << s1[i];
    }
    cout << endl;
    return 0;
}

