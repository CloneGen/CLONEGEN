int main () {
    char s [105], *pc = s;
    int l, i;
    cin.getline (s, 105);
    l = strlen (s);
    s[l] = s[0];
    for (i = 0; i < l; i++) {
        cout << (char) (*pc + *(++pc));
    }
    cout << endl;
    return 0;
}

