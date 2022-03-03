int main () {
    int i;
    char a [80], b [80];
    gets (a);
    gets (b);
    for (i = 0; i < (int) strlen (a); i++)
        a[i] = tolower (a[i]);
    for (i = 0; i < (int) strlen (b); i++)
        b[i] = tolower (b[i]);
    if (strcmp (a, b) > 0)
        cout << ">" << endl;
    if (strcmp (a, b) < 0)
        cout << "<" << endl;
    if (strcmp (a, b) == 0)
        cout << "=" << endl;
    return 0;
}

