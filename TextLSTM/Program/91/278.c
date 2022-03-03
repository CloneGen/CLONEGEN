int main () {
    char c [102], *p = NULL;
    memset (c, 0, sizeof (c));
    cin.getline (c, 102);
    for (p = c; *p; p++) {
        if (*(p + 1))
            cout << (char) (*p + *(p + 1));
        else
            cout << (char) (*p + *c);
    }
    cout << endl;
    return 0;
}

