int main () {
    int a, b, i, j, p, q, m [100], n [100];
    cin >> a >> b;
    m[0] = a, n[0] = b;
    if (a == 1 || b == 1)
        cout << '1' << endl;
    else {
        for (i = 1;; i++) {
            m[i] = a / 2;
            a = a / 2;
            if (a == 1)
                break;
        }
        for (j = 1;; j++) {
            n[j] = b / 2;
            b = b / 2;
            if (b == 1)
                break;
        }
        for (p = 0; p <= i; p++) {
            for (q = 0; q <= j; q++) {
                if (m[p] == n[q]) {
                    cout << m[p] << endl;
                    return 0;
                };
            }
        }
    }
}

