int main () {
    int a, b, c, d, e;
    int wa, wb, wc, wd, we;
    for (a = 1; a <= 5; ++a) {
        for (b = 1; b <= 5; ++b) {
            if (a == b)
                continue;
            for (c = 1; c <= 5; ++c) {
                if (a == b || a == c || b == c)
                    continue;
                for (d = 1; d <= 5; ++d) {
                    if (a == b || a == c || a == d || b == c || b == d || c == d)
                        continue;
                    for (e = 1; e <= 5; ++e) {
                        if (a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e)
                            continue;
                        if (e == 2 || e == 3)
                            continue;
                        wa = (a == 1 || a == 2) + (e == 1);
                        wb = (b == 1 || b == 2) + (b == 2);
                        wc = (c == 1 || c == 2) + (a == 5);
                        wd = (d == 1 || d == 2) + (c != 1);
                        we = (e == 1 || e == 2) + (d == 1);
                        if ((wa == 0 || wa == 2) && (wb == 0 || wb == 2) && (wc == 0 || wc == 2) && (wd == 0 || wd == 2) && (we == 0 || we == 2))
                            cout << a << " " << b << " " << c << " " << d << " " << e;
                    }
                }
            }
        }
    }
    return 0;
}

