int main () {
    char s [101], s1 [101];
    cin.getline (s, 101);
    for (int i = 0;
    i < strlen (s) - 1; i++)
        *(s1 + i) = *(s + i) + *(s + i + 1);
    *(s1 + strlen (s) - 1) = *(s + strlen (s) - 1) + *s;
    *(s1 + strlen (s)) = '\0';
    cout << s1;
    return 0;
}

