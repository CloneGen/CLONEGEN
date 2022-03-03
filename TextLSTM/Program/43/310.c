int main () {
    int m, x, i, j;
    cin >> m;
    for (x = 3; x <= m / 2; x = x + 2) {
        for (i = 2; i <= sqrt (x); i++) {
            if (x % i == 0)
                break;
        }
        if (i > sqrt (x)) {
            for (j = 2; j <= sqrt (m - x); j++) {
                if (((m - x) % j) == 0)
                    break;
            }
            if (j > sqrt (m - x))
                cout << x << " " << m - x << endl;
        }
    }
    return 0;
}

