int main () {
    int a = 0, b = 0, c = 0, d = 0, i = 0;
    int x [7];
    char y [4];
    x[0] = 0;
    x[1] = 0;
    x[2] = 0;
    for (a = 0; a <= 50; a += 10) {
        for (b = 10; b <= 50; b += 10) {
            if (b != a) {
                for (c = 10; c <= 50; c += 10) {
                    if (c != a && c != b) {
                        for (d = 10; d <= 50; d += 10) {
                            if (d != a && d != b && d != c && (a + b) == (c + d) && (a + d) > (b + c) && a + c < b) {
                                for (i = 3; i < 7; i++) {
                                    x[i] = 0;
                                    if (x[i - 1] != a && x[i - 2] != a && x[i - 3] != a) {
                                        x[i] = a;
                                        y[i] = 'z';
                                    }
                                    if (x[i] < b && x[i - 1] != b && x[i - 2] != b && x[i - 3] != b) {
                                        x[i] = b;
                                        y[i] = 'q';
                                    }
                                    if (x[i] < c && x[i - 1] != c && x[i - 2] != c && x[i - 3] != c) {
                                        x[i] = c;
                                        y[i] = 's';
                                    }
                                    if (x[i] < d && x[i - 1] != d && x[i - 2] != d && x[i - 3] != d) {
                                        x[i] = d;
                                        y[i] = 'l';
                                    }
                                    cout << y[i] << ' ' << x[i] << endl;
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

