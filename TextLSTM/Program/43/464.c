int main () {
    int m, a, b, k, n;
    cin >> m;
    for (int i = 3;
    i <= (m / 2); i += 2) {
        a = (int) sqrt (i * 1.0);
        for (k = 2; k <= a + 1; k++) {
            if (i % k == 0)
                break;
            else
                continue;
        }
        if (k > (a + 1)) {
            b = (int) sqrt ((m - i) * 1.0);
            for (n = 2; n <= b + 1; n++) {
                if ((m - i) % n == 0)
                    break;
                else
                    continue;
            }
            if (n > (b + 1))
                cout << i << " " << (m - i) << endl;
        }
    }
    return 0;
}

