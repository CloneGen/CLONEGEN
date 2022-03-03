int main () {
    int m, a, b, c, d, i, k;
    cin >> m;
    for (a = 3; a < m; a = a + 2) {
        b = m - a;
        if (b < a)
            break;
        c = sqrt (a);
        for (i = 2; i <= c; i++)
            if (a % i == 0)
                break;
        if (i > c) {
            d = sqrt (b);
            for (k = 2; k <= d; k++)
                if (b % k == 0)
                    break;
            if (k > d)
                cout << a << " " << b << endl;
        }
    }
    return 0;
}

