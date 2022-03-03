int main () {
    int length, i;
    char s [102], s1 [101];
    cin.getline (s, 101);
    length = strlen (s);
    s[length] = s[0];
    for (i = 0; i < length; i++)
        s1[i] = s[i] + s[i + 1];
    s1[length] = '\0';
    cout << s1;
    return 0;
}

