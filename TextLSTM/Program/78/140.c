int main () {
    int m [4];
    int i;
    int z;
    int q;
    int s;
    int l;
    for (z = 10; z <= 50; z = z + 10) {
        for (q = 10; q <= 50; q = q + 10) {
            if (z == q)
                continue;
            for (s = 10; s <= 50; s = s + 10) {
                if (z == s || s == q)
                    continue;
                for (l = 10; l <= 50; l = l + 10) {
                    if (z == l || s == l || q == l)
                        continue;
                    if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                        m[0] = z;
                        m[1] = q;
                        m[2] = s;
                        m[3] = l;
                    }
                }
            }
        }
    }
    for (i = 1; i <= 4; i++) {
        if ((m[0] > m[1]) && (m[0] > m[2]) && (m[0] > m[3])) {
            cout << "z " << m[0] << endl;
            m[0] = 0;
        }
        if ((m[1] > m[0]) && (m[1] > m[2]) && (m[1] > m[3])) {
            cout << "q " << m[1] << endl;
            m[1] = 0;
        }
        if ((m[2] > m[0]) && (m[2] > m[1]) && (m[2] > m[3])) {
            cout << "s " << m[2] << endl;
            m[2] = 0;
        }
        if ((m[3] > m[0]) && (m[3] > m[1]) && (m[3] > m[2])) {
            cout << "l " << m[3] << endl;
            m[3] = 0;
        }
    }
    return 0;
}

