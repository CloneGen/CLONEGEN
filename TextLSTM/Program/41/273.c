int main () {
    int a, b, c, d, e;
    int w [6] = {0};
    for (a = 1; a < 6; a++) {
        for (b = 1; b < 6; b++) {
            if (b == a)
                continue;
            else {
                for (c = 1; c < 6; c++) {
                    if (a == c || b == c)
                        continue;
                    else
                        for (d = 1; d < 6; d++) {
                            if (d == a || d == b || d == c)
                                continue;
                            else {
                                e = 15 - a - b - c - d;
                                w[a] = (e == 1);
                                w[b] = (b == 2);
                                w[c] = (a == 5);
                                w[d] = (c != 1);
                                w[e] = (d == 1);
                                if (w[1] + w[2] == 2 && e != 2 && e != 3 && w[3] + w[4] + w[5] == 0)
                                    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
                            }
                        }
                }
            }
        }
    }
    return 0;
}

