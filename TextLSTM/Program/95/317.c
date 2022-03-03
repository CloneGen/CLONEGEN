int main () {
    char a [80];
    char b [80];
    cin.getline (a, 80);
    cin.getline (b, 80);
    int n = strlen (a);
    for (int i = 0;
    i < n; i++) {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
    }
    n = strlen (b);
    for (int i = 0;
    i < n; i++) {
        if (b[i] >= 97 && b[i] <= 122)
            b[i] -= 32;
    }
    int z;
    z = strcmp (a, b);
    if (z < 0)
        cout << "<";
    if (z == 0)
        cout << "=";
    if (z > 0)
        cout << ">";
    return 0;
}

