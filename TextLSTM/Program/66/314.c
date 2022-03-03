const  char WeekDay [7] [4] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main () {
    long y, m, d, res;
    scanf ("%ld %ld %ld", &y, &m, &d);
    res = 0;
    res += (y - 1) * 1 % 7;
    res += (y - 1) / 4 % 7;
    res -= (y - 1) / 100 % 7;
    res += (y - 1) / 400 % 7;
    if (m > 8) {
        res += (m - 7) / 2 * 3 + (m - 8) / 2 * 2;
        res += 3 * 2 + 4 * 3;
    }
    else
        res += (m - 1) / 2 * 2 + m / 2 * 3;
    if (m > 2)
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            res -= 1;
        else
            res -= 2;
    res %= 7;
    res += d - 1;
    res %= 7;
    printf ("%s.\n", WeekDay[res]);
}

