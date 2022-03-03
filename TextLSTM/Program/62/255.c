int main () {
    int n;
    char a [100], *p = a;
    cin >> a;
    n = strlen (a);
    for (int i = 0;
    i < n; i++) {
        cout << *(p + i);
    }
    while (cin >> a) {
        cout << ' ';
        n = strlen (a);
        for (int i = 0;
        i < n; i++) {
            cout << *(p + i);
        }
    }
    return 0;
}

