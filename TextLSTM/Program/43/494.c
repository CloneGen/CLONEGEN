int main () {
    int m, a, b, c, d, e, i, n, p;
    cin >> m;
    for (i = 3; i <= m / 2; i += 2) {
        n = (int) sqrt (i);
        a = 2;
        while (a <= n) {
            p = i % a;
            if (p == 0)
                break;
            a++;
        }
        if (a == n + 1) {
            c = m - i;
            d = (int) sqrt (c);
            for (a = 2; a <= d; a++) {
                e = c % a;
                if (e == 0)
                    break;
            }
            if (a == d + 1) {
                cout << i << " " << c << endl;
            }
        }
    }
    return 0;
}

