int main () {
    char a [101];
    char b [101];
    int i = 0;
    int length = 0;
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    cin.getline (a, 101);
    length = strlen (a);
    for (i = 0; i <= length - 2; i++)
        b[i] = a[i] + a[i + 1];
    b[i] = a[i] + a[0];
    for (i = 0; i < length; i++)
        cout << b[i];
    return 0;
}

