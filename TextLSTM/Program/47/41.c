int main () {
    int i, n, a [110] = {0};
    int *p = a;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> *(p + i);
    for (i = n - 1; i > 0; i--)
        cout << *(p + i) << ' ';
    cout << *p << endl;
    return 0;
}

