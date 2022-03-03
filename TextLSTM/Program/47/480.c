int main () {
    int a [101];
    int n = 0, i = 0, temp = 0;
    int *p = a;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> *(p + i);
    for (i = 0; i < n / 2; i++) {
        temp = *(p + i);
        *(p + i) = *(p + n - i - 1);
        *(p + n - i - 1) = temp;
    }
    cout << *p;
    for (i = 1; i < n; i++)
        cout << ' ' << *(p + i);
    return 0;
}

