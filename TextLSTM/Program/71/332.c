int main () {
    int n, i, a, b, c, t, p, q;
    cin >> n;
    for (i = 1; i <= n; i++) {
        while (cin >> a >> b >> c) {
            if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
                p = 1;
            else
                p = 0;
            if (b < c) {
                t = b, b = c, c = t;
            }
            int s = 0;
            for (i = c; i < b; i++) {
                if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                    q = 31;
                if (i == 4 || i == 6 || i == 9 || i == 11)
                    q = 30;
                if (i == 2 && p == 0)
                    q = 28;
                if (i == 2 && p == 1)
                    q = 29;
                s = s + q;
            }
            if (s % 7 == 0)
                cout << "YES" << endl;
            else if (s % 7 != 0)
                cout << "NO" << endl;
        }
    }
    return 0;
}

