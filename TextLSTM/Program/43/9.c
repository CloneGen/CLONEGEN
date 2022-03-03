int main () {
    int m, a, b, i, j;
    cin >> m;
    for (a = 3; a <= (m / 2); a = a + 2) {
        int a1 = (int) sqrt (a);
        for (j = 2; j <= a1; j++) {
            if (a % j == 0)
                break;
        }
        if (j == (a1 + 1)) {
            for (b = a; b <= m; b = b + 2) {
                int b1 = (int) sqrt (b);
                for (i = 2; i <= b1; i++) {
                    if (b % i == 0)
                        break;
                }
                if ((i == (b1 + 1)) && (a + b == m)) {
                    cout << a << " " << b << endl;
                }
            }
        }
    }
    return 0;
}

