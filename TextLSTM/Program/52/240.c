int main () {
    int c [1000], n, m;
    int *p = NULL;
    cin >> n >> m;
    p = c;
    for (; p <= c + n - 1; p++)
        cin >> *p;
    for (p = c + n - 1; p >= c; p--)
        *(p + m) = *p;
    for (p = c; p <= c + m - 1; p++)
        *p = *(p + n);
    p = c + 1;
    cout << *c;
    while (p <= c + n - 1)
        cout << " " << *p++;
    cout << endl;
    return 0;
}

