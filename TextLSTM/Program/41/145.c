int main () {
    int a, b, c, d, e;
    for (e = 1; e <= 5; e++) {
        if (e == 2 || e == 3)
            continue;
        for (a = 1; a <= 5; a++) {
            if (a == e)
                continue;
            for (b = 1; b <= 5; b++) {
                if (b == a || b == e)
                    continue;
                for (c = 1; c <= 5; c++) {
                    if (c == a || c == b || c == e)
                        continue;
                    for (d = 1; d <= 5; d++) {
                        if (d == a || d == b || d == c || d == e)
                            continue;
                        if (a > 2 && e == 1)
                            continue;
                        if (b > 2 && b == 2)
                            continue;
                        if (c > 2 && a == 5)
                            continue;
                        if (d > 2 && c != 1)
                            continue;
                        if (e > 2 && d == 1)
                            continue;
                        if (((a < 3 && e == 1) + (b < 3 && b == 2) + (c < 3 && a == 5) + (d < 3 && c != 1) + (e < 3 && d == 1)) != 2)
                            continue;
                        cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                        a = b = c = d = e = 6;
                    }
                }
            }
        }
    }
    return 0;
}

