int main () {
    char str [100] [20];
    char (*p) [20] = NULL;
    int n = 0, i;
    while (cin >> str[n])
        n++;
    p = str;
    cout << *p;
    for (i = 1; i < n; i++)
        cout << ' ' << *(p + i);
    cout << endl;
    return 0;
}

