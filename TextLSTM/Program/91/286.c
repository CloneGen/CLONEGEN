int main () {
    char s [101], s1 [101];
    cin.getline (s, sizeof (s));
    int len = strlen (s);
    for (int i = 0;
    i < len; i++) {
        if (i == len - 1) {
            *(s1 + i) = *(s + i) + *(s);
        }
        else {
            *(s1 + i) = *(s + i) + *(s + i + 1);
        }
    }
    *(s1 + len) = '\0';
    cout << s1 << endl;
    return 0;
}

