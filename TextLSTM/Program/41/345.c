int main () {
    int a, b, c, d, e, f;
    for (a = 1; a < 6; a++)
        for (b = 1; b < 6; b++)
            for (c = 1; c < 6; c++)
                for (d = 1; d < 6; d++)
                    for (e = 4; e < 6; e++)
                        if ((a - b) * (a - c) * (a - d) * (a - e) * (b - c) * (b - d) * (b - e) * (c - d) * (c - e) * (d - e) != 0) {
                            f = 1;
                            if (a < 3)
                                if (e == 1)
                                    f *= 1;
                                else
                                    f *= 0;
                            else if (e != 1)
                                f *= 1;
                            else
                                f *= 0;
                            if (b == 1)
                                f *= 0;
                            if (c < 3)
                                if (a == 5)
                                    f *= 1;
                                else
                                    f *= 0;
                            else if (a != 5)
                                f *= 1;
                            else
                                f *= 0;
                            if (d == 2)
                                if (c != 1)
                                    f *= 1;
                                else
                                    f *= 0;
                            else if (c == 1)
                                f *= 1;
                            else
                                f *= 0;
                            if (d == 1)
                                f *= 0;
                            if (f == 1)
                                cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                        }
    return 0;
}

