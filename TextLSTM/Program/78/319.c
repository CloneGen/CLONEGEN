int main () {
    int z, q, s, l, sum;
    int a1, a2, a3, a4, a5, a6, a7, a8;
    for (z = 1; z <= 5; z++)
        for (q = 1; q <= 5; q++)
            for (s = 1; s <= 5; s++)
                for (l = 1; l <= 5; l++) {
                    a1 = (z <= 5);
                    a2 = (q <= 5);
                    a3 = (s <= 5);
                    a4 = (l <= 5);
                    a5 = (z + q == s + l);
                    a6 = (z + l > s + q);
                    a7 = (s + z < q);
                    a8 = (z != q && z != s && z != l && q != s && q != l && s != l);
                    sum = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
                    if (sum == 8) {
                        int i;
                        for (i = 5; i <= 5; i = i - 1) {
                            if (i == z)
                                cout << "z" << " " << 10 * z << endl;
                            if (i == q)
                                cout << "q" << " " << 10 * q << endl;
                            if (i == s)
                                cout << "s" << " " << 10 * s << endl;
                            if (i == l)
                                cout << "l" << " " << 10 * l << endl;
                        }
                    }
                }
    return 0;
}

