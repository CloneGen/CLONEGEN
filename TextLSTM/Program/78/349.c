int main () {
    int cc1, cc2, cc3;
    int z, q, s, l, a, b, c, d, e;
    for (z = 1; z <= 5; z++)
        for (q = 1; q <= 5; q++)
            for (s = 1; s <= 5; s++)
                for (l = 1; l <= 5; l++) {
                    if ((z == l) || (z == q) || (z == s) || (q == s) || (q == l) || (s == l))
                        continue;
                    a = z + q;
                    b = s + l;
                    c = z + l;
                    d = s + q;
                    e = z + s;
                    cc1 = (a == b);
                    cc2 = (c > d);
                    cc3 = (e < q);
                    if (cc1 + cc2 + cc3 == 3) {
                        if (l < q)
                            cout << "q" << " " << q << "0" << "\n" << "l" << " " << l << "0" << endl;
                        else
                            cout << "l" << " " << l << "0" << "\n" << "q" << " " << q << "0" << endl;
                        if (z < s)
                            cout << "s" << " " << s << "0" << "\n" << "z" << " " << z << "0" << endl;
                        else
                            cout << "z" << " " << z << "0" << "\n" << "s" << " " << s << "0" << endl;
                    }
                }
    return 0;
}

