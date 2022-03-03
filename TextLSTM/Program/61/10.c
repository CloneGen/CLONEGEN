int main () {
    int n = 0, i = 0, j = 0, p = 0, q = 0, r = 0;
    cin >> n;
    int a [n], b [n];
    for (; i < n; i++)
        cin >> a[i];
    for (; j < n; j++) {
        p = 0;
        q = 1;
        for (b[j] = 0; b[j] < a[j] - 1; b[j]++) {
            r = p;
            p = q;
            q += r;
        }
        cout << q << endl;
    }
    return 0;
}

