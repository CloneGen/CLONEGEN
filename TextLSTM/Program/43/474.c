int main () {
    int m, a, b, i, k;
    cin >> m;
    for (a = 3; a <= m / 2; a = a + 2) {
        for (i = 3; i < a; i = i + 2) {
            if (a % i == 0)
                break;
        }
        if (i == a) {
            b = m - a;
            for (k = 3; k < b; k = k + 2) {
                if (b % k == 0)
                    break;
            }
            if (k == b)
                cout << a << " " << b << endl;
        }
    }
    return 0;
}

