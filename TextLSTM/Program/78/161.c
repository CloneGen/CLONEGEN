char max (int x, int y, int z, int w) {
    char m;
    int n;
    n = x > y ? x : y;
    n = n > z ? n : z;
    n = n > w ? n : w;
    if (n == x)
        m = 'z';
    if (n == y)
        m = 'q';
    if (n == z)
        m = 's';
    if (n == w)
        m = 'l';
    return (m);
}

int main () {
    int z, q, s, l, i, Z, Q, S, L;
    for (z = 10; z <= 50; z = z + 10) {
        for (q = 10; q <= 50; q = q + 10) {
            for (s = 10; s <= 50; s = s + 10) {
                for (l = 10; l <= 50; l = l + 10) {
                    if ((z != q) && (z != s) && (z != l) && (q != s) && (s != l) && (q != l) && (z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                        Z = z;
                        Q = q;
                        S = s;
                        L = l;
                        for (i = 1; i < 5; i++) {
                            switch (max (Z, Q, S, L)) {
                            case 'z' :
                                {
                                    cout << "z " << Z << endl;
                                    Z = 0;
                                    break;
                                }
                            case 'q' :
                                {
                                    cout << "q " << Q << endl;
                                    Q = 0;
                                    break;
                                }
                            case 's' :
                                {
                                    cout << "s " << S << endl;
                                    S = 0;
                                    break;
                                }
                            case 'l' :
                                {
                                    cout << "l " << L << endl;
                                    L = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

