int main () {
    int z, q, s, l, z1, q1, s1, l1, i;
    for (z = 1; z <= 5; z++)
        for (q = 1; q <= 5; q++)
            for (s = 1; s <= 5; s++)
                for (l = 1; l <= 5; l++) {
                    if ((z + q == s + l) && (z + l > s + q) && (z + s < q) && (z != s) && (z != q) && (z != l) && (s != q) && (s != l) && (q != l)) {
                        z1 = z;
                        q1 = q;
                        s1 = s;
                        l1 = l;
                    }
                }
    for (i = 5; i >= 1; i--) {
        if (z1 == i)
            cout << "z " << z1 * 10 << '\n';
        if (q1 == i)
            cout << "q " << q1 * 10 << '\n';
        if (s1 == i)
            cout << "s " << s1 * 10 << '\n';
        if (l1 == i)
            cout << "l " << l1 * 10 << '\n';
    }
    return 0;
}

