int main () {
    int z, q, s, l, a, b, c, d;
    char A, B, C, D;
    for (z = 10; z <= 50; z = z + 10)
        for (q = 10; q <= 50; q = q + 10)
            for (s = 10; s <= 50; s = s + 10)
                for (l = 10; l <= 50; l = l + 10)
                    if (z + q == s + l)
                        if (z + l > s + q && z + s < q) {
                            a = z;
                            if (a < q) {
                                b = a;
                                a = q;
                            }
                            else {
                                b = q;
                            }
                            if (a < s) {
                                c = b;
                                b = a;
                                a = s;
                            }
                            else {
                                if (b < s) {
                                    c = b;
                                    b = s;
                                }
                                else {
                                    c = s;
                                }
                            }
                            if (a < l) {
                                d = c;
                                c = b;
                                b = a;
                                a = l;
                            }
                            else {
                                if (b < l) {
                                    d = c;
                                    c = b;
                                    b = l;
                                }
                                else {
                                    if (c < l) {
                                        d = c;
                                        c = l;
                                    }
                                    else {
                                        d = l;
                                    }
                                }
                            }
                            if (a != b && b != c && c != d && a != c && a != d && b != d) {
                                if (z == a) {
                                    A = 'z';
                                }
                                if (z == b) {
                                    B = 'z';
                                }
                                if (z == c) {
                                    C = 'z';
                                }
                                if (z == d) {
                                    D = 'z';
                                }
                                if (q == a) {
                                    A = 'q';
                                }
                                if (q == b) {
                                    B = 'q';
                                }
                                if (q == c) {
                                    C = 'q';
                                }
                                if (q == d) {
                                    D = 'q';
                                }
                                if (s == a) {
                                    A = 's';
                                }
                                if (s == b) {
                                    B = 's';
                                }
                                if (s == c) {
                                    C = 's';
                                }
                                if (s == d) {
                                    D = 's';
                                }
                                if (l == a) {
                                    A = 'l';
                                }
                                if (l == b) {
                                    B = 'l';
                                }
                                if (l == c) {
                                    C = 'l';
                                }
                                if (l == d) {
                                    D = 'l';
                                }
                                cout << A << ' ' << a << '\n' << B << ' ' << b << '\n' << C << ' ' << c << '\n' << D << ' ' << d << endl;
                            }
                        }
    return 0;
}

