int main () {
    int a, b, c, d, e;
    for (a = 1; a <= 5; a++)
        for (b = 1; b <= 5; b++) {
            if (a == b)
                continue;
            for (c = 1; c <= 5; c++) {
                if (a == c || b == c)
                    continue;
                for (d = 1; d <= 5; d++) {
                    if (a == d || b == d || c == d)
                        continue;
                    e = 15 - a - b - c - d;
                    if (e == 2 || e == 3)
                        continue;
                    if ((e == 1) + (a == 1 || a == 2) != 1)
                        if ((b == 2) + (b == 1 || b == 2) != 1)
                            if ((a == 5) + (c == 1 || c == 2) != 1)
                                if ((c != 1) + (d == 1 || d == 2) != 1)
                                    if ((d == 1) + (e == 1 || e == 2) != 1) {
                                        cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
                                        return 0;
                                    }
                }
            }
        }
    return 0;
}

