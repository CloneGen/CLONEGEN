int main () {
    int z, q, s, l, a [4], i, k, p;
    char m [4] = {'z', 'q', 's', 'l'}, j;
    for (z = 1; z < 6; z++) {
        for (q = 1; q < 6; q++) {
            for (s = 1; s < 6; s++) {
                for (l = 1; l < 6; l++) {
                    if (z + q == s + l && z + l > s + q && z + s < q) {
                        a[0] = z;
                        a[1] = q;
                        a[2] = s;
                        a[3] = l;
                        for (k = 0; k < 3; k++) {
                            for (i = 0; i < 3; i++) {
                                if (a[i] < a[i + 1]) {
                                    p = a[i];
                                    a[i] = a[i + 1];
                                    a[i + 1] = p;
                                    j = m[i];
                                    m[i] = m[i + 1];
                                    m[i + 1] = j;
                                }
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
    for (i = 0; i < 4; i++) {
        cout << m[i] << ' ' << a[i] * 10 << endl;
    }
    cin.get ();
    return 0;
}

