int main () {
    int n, y, mx, my, leap, dd, d = 0;
    int m1, m2;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> y >> mx >> my;
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            leap = 1;
        else
            leap = 0;
        if (mx <= my) {
            m1 = mx;
            m2 = my;
        }
        else {
            m1 = my;
            m2 = mx;
        }
        while (m1 < m2) {
            if (m1 == 2)
                dd = 28 + leap;
            else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)
                dd = 30;
            else
                dd = 31;
            d = d + dd;
            m1++;
        }
        if (d % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        d = 0;
    }
    return 0;
}

