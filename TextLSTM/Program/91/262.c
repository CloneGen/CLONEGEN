int main () {
    int n;
    char s [102], *p = s;
    cin.getline (p, sizeof (s));
    n = strlen (p);
    *(p + n) = *p;
    for (; p < s + n; p++)
        cout << (char) (*p + *(p + 1));
    cout << endl;
    return 0;
}

