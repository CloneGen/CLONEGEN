int main () {
    int z, q, s, l, i, j, w [4];
    char n [4] = {'z', 'q', 's', 'l'};
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            for (s = 1; s <= 5; s++) {
                for (l = 1; l <= 5; l++) {
                    if (z != q && z != s && z != l && q != s && q != l && s != l) {
                        if ((z + q) == (s + l) && (z + l) > (s + q) && (z + s) < q)
                            w[0] = z, w[1] = q, w[2] = s, w[3] = l;
                    }
                }
            }
        }
    }
    for (i = 5; i >= 1; i--) {
        for (j = 0; j < 4; j++) {
            if (w[j] == i)
                cout << n[j] << " " << 10 * w[j] << endl;
        }
    }
    return 0;
}

