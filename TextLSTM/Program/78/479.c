int main () {
    int z, q, s, l;
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            for (s = 1; s <= 5; s++) {
                for (l = 1; l <= 5; l++) {
                    if (z + q == s + l && z + l > s + q && z + s < q) {
                        int a [4] = {z, q, s, l}, p = 0;
                        char b [4] = {'z', 'q', 's', 'l'}, q;
                        for (int j = 0;
                        j < 3; j++) {
                            for (int i = 0;
                            i <= 2 - j; i++) {
                                if (a[i] < a[i + 1]) {
                                    p = a[i];
                                    a[i] = a[i + 1];
                                    a[i + 1] = p;
                                    q = b[i];
                                    b[i] = b[i + 1];
                                    b[i + 1] = q;
                                }
                            }
                        }
                        for (int k = 0;
                        k < 4; k++) {
                            cout << b[k] << " " << a[k] * 10 << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

