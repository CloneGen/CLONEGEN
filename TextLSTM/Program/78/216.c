int main () {
    int z, q, s, l, n1, n2, n3, n4, i, j, t, a [4], pd1, pd2;
    char b [4];
    for (n1 = 1; n1 <= 5; n1++) {
        if (pd2 == 1) {
            break;
        }
        s = n1 * 10;
        for (n2 = 1; n2 <= 5; n2++) {
            if (pd2 == 1) {
                break;
            }
            z = n2 * 10;
            for (n3 = 1; n3 <= 5; n3++) {
                if (pd2 == 1) {
                    break;
                }
                q = n3 * 10;
                for (n4 = 1; n4 <= 5; n4++) {
                    if (pd2 == 1) {
                        break;
                    }
                    l = n4 * 10;
                    pd1 = ((z + q == s + l) && (z + l > s + q)) && (z + s < q);
                    if (pd1) {
                        a[0] = z;
                        a[1] = q;
                        a[2] = s;
                        a[3] = l;
                        pd2 = 1;
                    }
                }
            }
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (a[j] < a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i <= 3; i++) {
        if (a[i] == z) {
            b[i] = 'z';
        }
        if (a[i] == q) {
            b[i] = 'q';
        }
        if (a[i] == s) {
            b[i] = 's';
        }
        if (a[i] == l) {
            b[i] = 'l';
        }
    }
    for (i = 0; i < 4; i++) {
        printf ("%c ", b[i]);
        printf ("%d\n", a[i]);
    }
    return 0;
}

