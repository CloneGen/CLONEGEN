int main () {
    int i, j, t, a, b, c, d;
    int x [4];
    char name [4];
    char k;
    for (a = 10; a < 50; a += 10) {
        for (b = 10; b < 50; b += 10) {
            if (a != b) {
                for (c = 10; c < 50; c += 10) {
                    if (b != c && a != c) {
                        for (d = 10; d < 50; d += 10) {
                            if (a != d && b != d && c != d) {
                                if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
                                    break;
                            }
                        }
                        if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
                            break;
                    }
                }
                if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
                    break;
            }
        }
        if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
            break;
    }
    x[0] = a;
    x[1] = b;
    x[2] = c;
    x[3] = d;
    name[0] = 'z';
    name[1] = 'q';
    name[2] = 's';
    name[3] = 'l';
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3 - j; i++) {
            if (x[i] < x[i + 1]) {
                t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
                k = name[i];
                name[i] = name[i + 1];
                name[i + 1] = k;
            }
        }
    }
    for (i = 0; i < 4; i++)
        cout << name[i] << " " << x[i] << endl;
    return 0;
}

