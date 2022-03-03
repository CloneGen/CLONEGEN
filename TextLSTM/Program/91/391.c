int main () {
    char s [101], s1 [101], *p = NULL, *q = NULL;
    cin.getline (s, 101);
    int len = strlen (s);
    for (p = s, q = s1; p < s + len - 1; p++, q++)
        *q = *p + *(p + 1);
    *q = *p + s[0];
    for (q = s1; q < s1 + len; q++)
        cout << *q;
    return 0;
}

