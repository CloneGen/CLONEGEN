int main () {
    char m [4];
    int a, b, c, d, p [5], i, j, k, n;
    for (a = 10; a <= 50; a = a + 10) {
        for (b = 10; b <= 50; b = b + 10) {
            for (c = 10; c <= 50; c = c + 10) {
                for (d = 10; d <= 50; d = d + 10) {
                    if (((a + b) == (c + d)) && ((a + d) > (b + c)) && ((a + c) < b)) {
                        p[1] = a;
                        p[2] = b;
                        p[3] = c;
                        p[4] = d;
                        break;
                    }
                }
            }
        }
    }
    m[1] = 'z';
    m[2] = 'q';
    m[3] = 's';
    m[4] = 'l';
    for (j = 1; j <= 3; j++) {
        for (i = 1; i <= 4 - j; i++) {
            if (p[i] < p[i + 1]) {
                k = p[i];
                p[i] = p[i + 1];
                p[i + 1] = k;
                n = m[i];
                m[i] = m[i + 1];
                m[i + 1] = n;
            }
        }
    }
    cout << m[1] << " " << p[1] << endl;
    cout << m[2] << " " << p[2] << endl;
    cout << m[3] << " " << p[3] << endl;
    cout << m[4] << " " << p[4] << endl;
    return 0;
}

