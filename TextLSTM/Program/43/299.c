int main () {
    int m, s1, s2;
    cin >> m;
    for (int i = 3;
    i <= m / 2; i = i + 2) {
        s1 = 0;
        s2 = 1;
        for (int j = 2;
        j <= sqrt (i); j = j + 1) {
            if (i % j == 0) {
                s1 = 1;
                break;
            }
        }
        if (s1 == 0) {
            s2 = 0;
            for (int j = 2;
            j <= sqrt (m - i); j = j + 1) {
                if ((m - i) % j == 0) {
                    s2 = 1;
                    break;
                }
            }
        }
        if (s2 == 0) {
            cout << i << " " << m - i << endl;
        }
    }
    return 0;
}

