int main () {
    int z, q, s, l, a [4], i, j, t;
    char b [4], p;
    for (z = 10; z <= 50; z = z + 10)
        for (q = 10; q <= 50; q = q + 10)
            for (s = 10; s <= 50; s = s + 10)
                for (l = 10; l <= 50; l = l + 10) {
                    if (z + q == s + l && z + l > s + q && z + s < q) {
                        a[0] = z;
                        a[1] = q;
                        a[2] = s;
                        a[3] = l;
                        b[0] = 'z';
                        b[1] = 'q';
                        b[2] = 's';
                        b[3] = 'l';
                        for (i = 0; i < 4; i++)
                            for (j = i + 1; j < 4; j++)
                                if (a[i] < a[j]) {
                                    t = a[j];
                                    a[j] = a[i];
                                    a[i] = t;
                                    p = b[j];
                                    b[j] = b[i];
                                    b[i] = p;
                                }
                    }
                }
    for (i = 0; i < 4; i++)
        cout << b[i] << " " << a[i] << endl;
    return 0;
}

