int main () {
    int a [100] = {0};
    int j, s, n, i, m;
    cin >> n;
    while (n > 0) {
        cin >> m;
        s = 0;
        for (i = 0; i < 100; i++)
            a[i] = 0;
        if (m == 0)
            s = 0;
        else {
            for (i = 0; i < m; i++) {
                cin >> j;
                a[j + 1 + 3 * i] = 1;
                a[j + 2 + 3 * i] = 1;
                a[j + 3 + 3 * i] = 1;
            }
            for (i = 1; i <= 60; i++)
                s = s + a[i];
        }
        cout << 60 - s << endl;
        n--;
    }
    return 0;
}

