int main () {
    int z = 1, q = 1, s = 1, l = 1;
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            if (z != q) {
                for (s = 1; s <= 5; s++) {
                    if (s != z && s != q) {
                        for (l = 1; l <= 5; l++) {
                            if (l != z && l != q && l != s) {
                                if (z == s + l - q && z > s + q - l && z < q - s) {
                                    int a [4] = {z, q, s, l}, i, j, t;
                                    char m [4] = {'z', 'q', 's', 'l'}, x;
                                    for (j = 0; j < 3; j++) {
                                        for (i = 0; i < 3 - j; i++) {
                                            if (a[i] < a[i + 1]) {
                                                t = a[i];
                                                a[i] = a[i + 1];
                                                a[i + 1] = t;
                                                x = m[i];
                                                m[i] = m[i + 1];
                                                m[i + 1] = x;
                                            }
                                        }
                                    }
                                    cout << m[0] << " " << a[0] * 10 << endl;
                                    cout << m[1] << " " << a[1] * 10 << endl;
                                    cout << m[2] << " " << a[2] * 10 << endl;
                                    cout << m[3] << " " << a[3] * 10 << endl;
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

