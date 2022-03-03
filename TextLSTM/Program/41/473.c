int main () {
    int a, b, c, d, e;
    int p [6] = {0, 1, 1, 0, 0, 0};
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
                    for (e = 1; e <= 5; e++) {
                        if (a == e || b == e || c == e || d == e)
                            continue;
                        if (((e == 1 && p[a] == 1) || (e != 1 && p[a] == 0)) && ((b == 2) || (b != 2 && p[b] == 0)) && ((a == 5 && p[c] == 1) || (a != 5 && p[c] == 0)) && ((c != 1 && p[d] == 1) || (c == 1 && p[d] == 0)) && ((d == 1 && e == 2) || (d != 1 && p[e] == 0)) && (e != 2 && e != 3)) {
                            cout << a << ' ';
                            cout << b << ' ';
                            cout << c << ' ';
                            cout << d << ' ';
                            cout << e;
                            a = b = c = d = e = 6;
                        }
                    }
                }
            }
        }
    return 0;
}

