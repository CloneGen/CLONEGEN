int main () {
    int z, q, s, l, i;
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            for (s = 1; s <= 5; s++) {
                for (l = 1; l <= 5; l++) {
                    if ((z + q == s + l) && (z + l > s + q) && (s + z < q) && (z != q) && (q != s) && (s != l) && (l != z) && (z != s) && (q != l)) {
                        int z1 = z;
                        int q1 = q;
                        int s1 = s;
                        int l1 = l;
                        for (i = 1; i <= 5; i++) {
                            z1++;
                            q1++;
                            s1++;
                            l1++;
                            if (z1 == 6)
                                cout << 'z' << " " << z * 10 << endl;
                            if (q1 == 6)
                                cout << 'q' << " " << q * 10 << endl;
                            if (s1 == 6)
                                cout << 's' << " " << s * 10 << endl;
                            if (l1 == 6)
                                cout << 'l' << " " << l * 10 << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

