int main () {
    int n, i, a [102], *p = NULL, *q = NULL, temp;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (p = a, q = a + n - 1; p < q; p++, q--) {
        temp = *p;
        *p = *q;
        *q = temp;
    }
    for (p = a; p < (a + n - 1); p++)
        cout << *p << ' ';
    p = a + n - 1;
    cout << *p << endl;
    return 0;
}

