int main () {
    int m, p1, p2, i, k;
    cin >> m;
    for (p1 = 3; p1 <= (m / 2); p1 += 2) {
        k = 1;
        for (i = 1; i <= sqrt (p1); i += 2) {
            if ((p1 % i == 0) && (i != 1)) {
                k = 0;
                break;
            }
        }
        if (k == 1) {
            p2 = m - p1;
            for (i = 1; i <= sqrt (p2); i += 2) {
                if ((p2 % i == 0) && (i != 1)) {
                    k = 0;
                    break;
                }
            }
            if (k == 1)
                cout << p1 << " " << p2 << endl;
        }
    }
    return 0;
}

