int main () {
    int z, q, s, l;
    int a [4], b [4], c [4], i;
    for (z = 10; z <= 50; z = z + 10) {
        for (q = 10; q <= 50; q = q + 10) {
            for (s = 10; s <= 50; s = s + 10) {
                for (l = 10; l <= 50; l = l + 10) {
                    if ((z + q == s + l) && (z + l > s + q) && (z + s < q) && (z != q) && (z != s) && (z != l) && (q != s) && (q != l) && (s != l)) {
                        a[0] = z;
                        a[1] = q;
                        a[2] = s;
                        a[3] = l;
                    }
                }
            }
        }
    }
    for (i = 0; i <= 3; i++)
        b[i] = a[i];
    sort (&a[0], &a[0] + 4);
    for (i = 0; i <= 3; i++) {
        c[i] = a[3 - i];
    }
    for (i = 0; i <= 3; i++) {
        if (c[i] == b[0])
            cout << "z" << " " << c[i] << endl;
        if (c[i] == b[1])
            cout << "q" << " " << c[i] << endl;
        if (c[i] == b[2])
            cout << "s" << " " << c[i] << endl;
        if (c[i] == b[3])
            cout << "l" << " " << c[i] << endl;
    }
    return 0;
}

