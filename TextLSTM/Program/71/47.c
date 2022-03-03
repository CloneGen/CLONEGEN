int main () {
    int N, n, m1, m2;
    int a [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> N;
    for (; N > 0; N--) {
        a[1] = 28;
        int d = 0;
        cin >> n >> m1 >> m2;
        if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
            a[1] += 1;
        if (m1 > m2) {
            m1 = m1 ^ m2;
            m2 = m1 ^ m2;
            m1 = m1 ^ m2;
        }
        for (; m1 < m2; m1++)
            d += a[m1 - 1];
        if (d % 7 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}

