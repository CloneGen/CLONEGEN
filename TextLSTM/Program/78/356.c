int main () {
    int z, q, s, l;
    for (z = 10; z <= 50; z += 10)
        for (q = 10; q <= 50; q += 10)
            if (q != z)
                for (s = 10; s <= 50; s += 10)
                    if (s != q && s != z)
                        for (l = 10; l <= 50; l += 10)
                            if (l != z && l != q && l != s) {
                                if ((z + q == s + l) + (z + l > s + q) + (z + s < q) == 3) {
                                    z = 10000 * z + 'z';
                                    q = 10000 * q + 'q';
                                    s = 10000 * s + 's';
                                    l = 10000 * l + 'l';
                                    int a [5], i;
                                    a[1] = z;
                                    a[2] = q;
                                    a[3] = s;
                                    a[4] = l;
                                    sort (a + 1, a + 5);
                                    for (i = 4; i > 0; i--)
                                        cout << (char) (a[i] % 10000) << ' ' << a[i] / 10000 << endl;
                                }
                            }
    return 0;
}

