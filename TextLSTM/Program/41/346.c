int isok (int a, int b, int c, int d, int e) {
    if (a > 2 && e == 1)
        return 0;
    if (c > 2 && a == 5)
        return 0;
    if (d > 2 && c != 1)
        return 0;
    if (e > 2 && d == 1)
        return 0;
    if (a <= 2 && e != 1)
        return 0;
    if (b <= 2 && b != 2)
        return 0;
    if (c <= 2 && a != 5)
        return 0;
    if (d <= 2 && c == 1)
        return 0;
    if (e <= 2 && d != 1)
        return 0;
    return 1;
}

int main () {
    int a, b, c, d, e, flag = 0;
    for (a = 1; a <= 5 && !flag; a++)
        for (b = 1; b <= 5 && !flag; b++)
            if (a != b)
                for (c = 1; c <= 5 && !flag; c++)
                    if (a != c && b != c)
                        for (d = 1; d <= 5 && !flag; d++)
                            if (a != d && b != d && c != d)
                                for (e = 1; e <= 5 && !flag; e++)
                                    if (a != e && b != e && c != e && d != e && e != 2 && e != 3) {
                                        if (isok (a, b, c, d, e)) {
                                            printf ("%d %d %d %d %d\n", a, b, c, d, e);
                                            flag = 1;
                                            break;
                                        }
                                    }
    return 0;
}

