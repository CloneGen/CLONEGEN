int main () {
    char m [] = {'z', 'q', 's', 'l'}, k;
    int a, b, c, d, n [4], i, j, p;
    for (a = 10; a <= 50; a = a + 10)
        for (b = 10; b <= 50; b = b + 10) {
            if (a == b)
                continue;
            for (c = 10; c <= 50; c = c + 10) {
                if (c == a || c == b)
                    continue;
                for (d = 10; d <= 50; d = d + 10) {
                    if (d == a || d == b || d == c)
                        continue;
                    if ((a + b) == (c + d) && (a + d) > (b + c) && (a + c) < b) {
                        n[0] = a;
                        n[1] = b;
                        n[2] = c;
                        n[3] = d;
                    }
                }
            }
        }
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2 - i; j++) {
            if (n[j] < n[j + 1]) {
                p = n[j];
                n[j] = n[j + 1];
                n[j + 1] = p;
                k = m[j];
                m[j] = m[j + 1];
                m[j + 1] = k;
            }
        }
    }
    for (i = 0; i < 4; i++)
        cout << m[i] << " " << n[i] << endl;
    return 0;
}

