int main () {
    int n, i, j, sqr, k1, k2;
    cin >> n;
    for (i = 6; i <= n; i = i + 2) {
        for (k1 = 3; k1 <= i / 2; k1 = k1 + 2) {
            sqr = (int) sqrt (k1);
            for (j = 2; j <= sqr; j++) {
                if (k1 % j == 0)
                    break;
            }
            if (j == sqr + 1) {
                k2 = i - k1;
                sqr = (int) sqrt (k2);
                for (j = 2; j <= sqr; j++) {
                    if (k2 % j == 0)
                        break;
                }
                if (j == sqr + 1) {
                    cout << i << "=" << k1 << "+" << k2 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

