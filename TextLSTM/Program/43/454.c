int main () {
    int m, i, a, j, b, k;
    cin >> m;
    for (i = 3; i <= m / 2; i += 2) {
        int a = sqrt (i);
        for (j = 2; j <= a; j++) {
            if (i % j == 0)
                break;
        }
        int b = sqrt (m - i);
        for (k = 2; k <= b; k++) {
            if ((m - i) % k == 0)
                break;
        }
        if ((j == a + 1) && (k == b + 1))
            cout << i << " " << m - i << endl;
    }
    return 0;
}

