int main () {
    int z, q, s, l;
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            if (q == z)
                continue;
            for (s = 1; s <= 5; s++) {
                if ((s == q) || (s == z))
                    continue;
                for (l = 1; l <= 5; l++) {
                    if ((s == l) || (q == l) || (z == l))
                        continue;
                    if ((z + q) == (s + l) && ((z + l) > (s + q)) && ((z + s) < q)) {
                        char a [6] = {'o', 'o', 'o', 'o', 'o'};
                        int c [5] = {0, 0, 0, 0, 0};
                        a[z - 1] = 'z';
                        c[z - 1] = z * 10;
                        a[q - 1] = 'q';
                        c[q - 1] = q * 10;
                        a[s - 1] = 's';
                        c[s - 1] = s * 10;
                        a[l - 1] = 'l';
                        c[l - 1] = l * 10;
                        char b [5];
                        int d [4];
                        int m = 0;
                        for (int n = 4;
                        n >= 0; n--) {
                            if (a[n] == 'o') {
                            }
                            else {
                                b[m] = a[n];
                                d[m] = c[n];
                                cout << b[m] << " " << d[m] << endl;
                            }
                            m++;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

