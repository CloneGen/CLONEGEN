int main () {
    int a, b, c, d, e;
    for (e = 1; e <= 5; e++)
        if ((e != 2) && (e != 3)) {
            for (a = 1; a <= 5; a++)
                for (b = 1; b <= 5; b++)
                    for (c = 1; c <= 5; c++)
                        for (d = 1; d <= 5; d++) {
                            if ((a - b) * (a - c) * (a - d) * (a - e) * (b - c) * (b - d) * (b - e) * (c - d) * (c - e) * (d - e) == 0)
                                continue;
                            if (((e == 1) + (a < 3) != 1) && ((b == 2) + (b < 3) != 1) && ((a == 5) + (c < 3) != 1) && ((c != 1) + (d < 3) != 1) && ((d == 1) + (e < 3) != 1))
                                cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e;
                        }
        }
    return 0;
}

