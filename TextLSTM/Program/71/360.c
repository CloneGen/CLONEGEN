int main () {
    int n, i, j, y, m1, m2, min, max, sum, month [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> y >> m1 >> m2;
        min = m1 < m2 ? m1 : m2;
        max = m1 > m2 ? m1 : m2;
        if (((y % 100 != 0) && (y % 4 == 0)) || (y % 400 == 0)) {
            sum = 0;
            month[1] = 29;
            for (j = min; j < max; j++)
                sum = sum + month[j - 1];
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            sum = 0;
            month[1] = 28;
            for (j = min; j < max; j++)
                sum = sum + month[j - 1];
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}

