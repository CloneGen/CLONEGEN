int main () {
    char a [100];
    int len, i;
    cin.getline (a, 100);
    len = strlen (a);
    cout << a[0];
    for (i = 1; i < len; i++) {
        if (!(a[i] == ' ' && a[i - 1] == ' '))
            cout.put (a[i]);
    }
    return 0;
}

