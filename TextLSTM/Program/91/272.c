int main () {
    char s1 [101], s2 [101], *p;
    int len, i;
    cin.getline (s1, 101);
    len = strlen (s1);
    for (i = 0; i < len - 1; i++) {
        s2[i] = s1[i] + s1[i + 1];
    }
    s2[len - 1] = s1[len - 1] + s1[0];
    for (p = s2; p < s2 + len; p++)
        cout << *p;
    return 0;
}

