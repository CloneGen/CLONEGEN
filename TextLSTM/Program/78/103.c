int main () {
    int z, q, s, l, a, b, c, d;
    char m [4], n [8];
    n[0] = 'z';
    n[1] = 'q';
    n[2] = 's';
    n[3] = 'l';
    for (z = 10; z <= 50; z = z + 10) {
        for (q = 10; q <= 50; q = q + 10) {
            for (s = 10; s <= 50; s = s + 10) {
                for (l = 10; l <= 50; l = l + 10) {
                    if ((z + q) == (s + l) && (z + l) > (s + q) && (z + s) < q) {
                        a = z;
                        b = q;
                        c = s;
                        d = l;
                    }
                }
            }
        }
    }
    if (a > b) {
        m[0] = a;
        n[4] = n[0];
        m[1] = b;
        n[5] = n[1];
    }
    else {
        m[0] = b;
        n[4] = n[1];
        m[1] = a;
        n[5] = n[0];
    }
    if (m[0] < c) {
        n[6] = n[5];
        n[5] = n[4];
        n[4] = n[2];
        m[2] = m[1];
        m[1] = m[0];
        m[0] = c;
    }
    else {
        if (m[1] < c) {
            n[6] = n[5];
            n[5] = n[2];
            m[2] = m[1];
            m[1] = c;
        }
        else {
            n[6] = n[2];
            m[2] = c;
        }
    }
    if (m[0] < d) {
        n[7] = n[6];
        n[6] = n[5];
        n[5] = n[4];
        n[4] = n[3];
        m[3] = m[2];
        m[2] = m[1];
        m[1] = m[0];
        m[0] = d;
    }
    else {
        if (m[1] < d) {
            n[7] = n[6];
            n[6] = n[5];
            n[5] = n[3];
            m[3] = m[2];
            m[2] = m[1];
            m[1] = d;
        }
        else {
            if (m[2] < d) {
                n[7] = n[6];
                n[6] = n[3];
                m[3] = m[2];
                m[2] = d;
            }
            else {
                n[7] = n[3];
                m[3] = d;
            }
        }
    }
    printf ("%c %d\n%c %d\n%c %d\n%c %d", n[4], m[0], n[5], m[1], n[6], m[2], n[7], m[3]);
    return 0;
}

