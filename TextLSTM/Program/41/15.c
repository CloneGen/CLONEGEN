int main () {
    int a, b, c, d, e;
    int A, B, C, D, E, F;
    for (a = 1; a <= 5; a++)
        for (b = 1; b <= 5; b++)
            for (c = 1; c <= 5; c++)
                for (d = 1; d <= 5; d++)
                    for (e = 1; e <= 5; e++) {
                        if ((a == b) || (a == c) || (a == d) || (a == e) || (b == c) || (b == d) || (b == e) || (c == d) || (c == e) || (d == e))
                            continue;
                        A = (e == 1);
                        if (A == 1)
                            if (e != 2)
                                continue;
                        B = (b == 2);
                        C = (a == 5);
                        if (C == 1)
                            if ((c != 1) && (c != 2))
                                continue;
                        D = (c != 1);
                        if (D == 1)
                            if ((d != 1) && (d != 2))
                                continue;
                        E = (d == 1);
                        if (E == 1)
                            if (e != 2)
                                continue;
                        F = ((e != 2) && (e != 3));
                        if ((A +B+C+D+E == 2) && (F == 1))
                            cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
                    }
    return 0;
}

