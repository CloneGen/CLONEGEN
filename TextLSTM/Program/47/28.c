int main () {
    int n, a [2000], *p, *q, temp;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    p = a;
    q = n + a - 1;
    for (; p < q; p++, q--) {
        temp = *p;
        *p = *q;
        *q = temp;
    }
    cout << a[0];
    for (int i = 1;
    i < n; i++)
        cout << " " << a[i];
    return 0;
}

