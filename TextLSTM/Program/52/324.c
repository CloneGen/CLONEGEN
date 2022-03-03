int main () {
    int m, n, a [101];
    cin >> n >> m;
    int *s;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    s = a + n - m;
    while (s < a + n) {
        cout << *s << " ";
        s++;
    }
    s = a;
    while (s < a + n - m - 1) {
        cout << *s << " ";
        s++;
    }
    cout << *(a + n - m - 1) << endl;
    return 0;
}

