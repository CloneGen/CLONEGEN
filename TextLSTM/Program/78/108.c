int main () {
    int z, q, s, l;
    int a [5];
    int i, j, m;
    char b [6];
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            if (z == q)
                continue;
            else {
                for (s = 1; s <= 5; s++) {
                    if ((s == z) || (s == q))
                        continue;
                    else {
                        for (l = 1; l <= 5; l++) {
                            if ((l == z) || (l == q) || (l == s))
                                continue;
                            else if (((z + q) == (s + l)) && ((z + l) > (q + s)) && ((z + s) < q)) {
                                a[1] = z;
                                a[2] = q;
                                a[3] = s;
                                a[4] = l;
                                b[a[1]] = 'z';
                                b[a[2]] = 'q';
                                b[a[3]] = 's';
                                b[a[4]] = 'l';
                                for (i = 1; i <= 4; i++) {
                                    for (j = 1; j <= 4 - i; j++) {
                                        if (a[j] < a[j + 1]) {
                                            m = a[j];
                                            a[j] = a[j + 1];
                                            a[j + 1] = m;
                                        }
                                    }
                                }
                                for (i = 1; i <= 4; i++) {
                                    cout << b[a[i]] << " " << a[i] * 10;
                                    if (i != 4)
                                        cout << endl;
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

