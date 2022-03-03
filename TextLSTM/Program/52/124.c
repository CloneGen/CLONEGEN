int main () {
    int str [111], *p, n, m, i;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        cin >> str[i];
    p = str + n;
    for (i = 0; i < n - m; i++) {
        *(p++) = *(str + i);
    }
    *p = '\0';
    p = str + n - m;
    cout << *p;
    for (p = str + n - m + 1; p < str + n + n - m; p++)
        cout << ' ' << *p;
    return 0;
}

