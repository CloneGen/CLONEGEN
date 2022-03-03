int main () {
    int i, a [6], n, m, q;
    int b = 0;
    cin >> n;
    for (i = 1;; i++) {
        m = n / 10;
        q = n - 10 * m;
        a[i] = q;
        n = m;
        b++;
        if (n == 0)
            break;
    }
    for (i = 1; i <= b; i++)
        cout << a[i];
    cout << endl;
    return 0;
}

