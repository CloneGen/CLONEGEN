int main () {
    int n, y, m1, m2, i, j, sum, t;
    int x [24] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        sum = 0;
        cin >> y >> m1 >> m2;
        if (m1 > m2) {
            t = m1;
            m1 = m2;
            m2 = t;
        }
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            for (j = 11 + m1; j <= 10 + m2; j++)
                sum += x[j];
        else
            for (j = m1 - 1; j <= m2 - 2; j++)
                sum += x[j];
        if (sum % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

