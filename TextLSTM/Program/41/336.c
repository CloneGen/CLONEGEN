int main () {
    int a = 0, b = 0, c = 0, d = 0, e = 0, A = 0, B = 0, C = 0, D = 0, E = 0;
    for (a = 1; a <= 5; a++)
        for (b = 1; b <= 5; b++)
            for (c = 1; c <= 5; c++)
                for (d = 1; d <= 5; d++)
                    for (e = 1; e <= 5; e++) {
                        if ((e == 2) || (e == 3))
                            continue;
                        if ((a == b) || (a == c) || (a == d) || (a == e) || (b == c) || (b == d) || (b == e) || (c == d) || (c == e) || (d == e))
                            continue;
                        A = (e == 1);
                        B = (b == 2);
                        C = (a == 5);
                        D = (c != 1);
                        E = (d == 1);
                        if ((A +B+C+D+E) != 2)
                            continue;
                        if ((a * A +b * B +c * C +d * D +e * E) == 3) {
                            cout << a << " " << b << " " << c << " " << d << " " << e;
                            return 0;
                        }
                    }
    return 0;
}

