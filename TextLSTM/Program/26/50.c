int main () {
    char a [100];
    int i, n;
    cin.get (a, 100);
    n = strlen (a);
    for (i = 0; i < n; i++)
        if (a[i] == ' ' && a[i + 1] == ' ')
            a[i] = '0';
    for (i = 0; i < n; i++)
        if (a[i] != '0')
            cout << a[i];
    return 0;
}

