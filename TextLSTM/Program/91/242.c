int main () {
    char str [101], a [101];
    int i, l;
    cin.getline (str, 101);
    l = strlen (str);
    for (i = 0; i < l - 1; i++)
        a[i] = str[i] + str[i + 1];
    a[i] = str[i] + str[0];
    for (i = 0; i < l; i++)
        cout << a[i];
    cout << endl;
    return 0;
}

