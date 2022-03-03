int main () {
    char str [100];
    int n, i, a [100] = {0};
    cin.get (str, 100);
    n = strlen (str);
    for (i = 1; i < n; i++) {
        if (str[i] == ' ' && str[i - 1] == ' ') {
            a[i] = 1;
        }
    }
    for (i = 0; i < n; i++) {
        if (a[i] == 0)
            cout << str[i];
    }
    return 0;
}

