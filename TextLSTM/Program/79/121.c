int main () {
    int n, m, i, j, a [301], x;
    while (cin >> n >> m, (n != 0) && (m != 0)) {
        a[0] = 0;
        for (i = 1; i <= n; i++)
            a[i] = 1;
        for (x = 1, i = 0; i < n - 1; i++) {
            for (j = 0; j < m; x++) {
                if (x > n)
                    x = x % n;
                if (a[x] == 1)
                    j++;
            }
            a[x - 1] = 0;
        }
        for (i = 1; i <= n; i++)
            if (a[i] == 1)
                cout << i << endl;
    }
    return 0;
}

