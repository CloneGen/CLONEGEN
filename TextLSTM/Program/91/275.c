int main () {
    char s [101], *p = NULL;
    cin.getline (s, 101);
    for (p = s; p < s + strlen (s) - 1; ++p)
        cout << (char) (*p + *(p + 1));
    cout << (char) (*s + *p) << endl;
    return 0;
}

