int main () {
    int n, m, i, j, count, p, xh;
    int a [310];
    int b [310];
    while (cin) {
        cin >> n >> m;
        if ((n == 0) && (m == 0))
            return 0;
        for (i = 1; i <= n; i++)
            a[i] = 1;
        count = n;
        p = 1;
        while (count != 1) {
            xh = 1;
            while (xh <= m) {
                if (a[p] == 1)
                    xh++;
                if (p <= n - 1)
                    p++;
                else
                    p = (p + 1) % n;
            }
            if (p == 1)
                a[n] = 0;
            else
                a[p - 1] = 0;
            count = count - 1;
        }
        for (i = 1; i <= n; i++) {
            if (a[i] == 1)
                cout << i << endl;
        }
    }
    return 0;
}

