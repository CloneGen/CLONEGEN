int main () {
    int a, b, c, d, e, f, i, j, g, sumy1, sumy2, summ1, summ2, h;
    scanf ("%d %d %d\n", &a, &b, &c);
    scanf ("%d %d %d", &d, &e, &f);
    sumy1 = 0;
    for (i = 1; i <= a - 1; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            g = 1;
        else
            g = 0;
        sumy1 = sumy1 + g;
    }
    sumy1 = sumy1 + 365 * (a - 1);
    sumy2 = 0;
    for (i = 1; i <= d - 1; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            g = 1;
        else
            g = 0;
        sumy2 = sumy2 + g;
    }
    sumy2 = sumy2 + 365 * (d - 1);
    if (b == 1)
        summ1 = 0;
    if (b == 2)
        summ1 = 31;
    if (b == 3)
        summ1 = 31 + 28;
    if (b == 4)
        summ1 = 31 + 28 + 31;
    if (b == 5)
        summ1 = 31 + 28 + 31 + 30;
    if (b == 6)
        summ1 = 31 + 28 + 31 + 30 + 31;
    if (b == 7)
        summ1 = 31 + 28 + 31 + 30 + 31 + 30;
    if (b == 8)
        summ1 = 31 + 28 + 31 + 30 + 31 + 30 + 31;
    if (b == 9)
        summ1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    if (b == 10)
        summ1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    if (b == 11)
        summ1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    if (b == 12)
        summ1 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    if (((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) && (b >= 3))
        g = 1;
    else
        g = 0;
    summ1 = summ1 + g;
    if (e == 1)
        summ2 = 0;
    if (e == 2)
        summ2 = 31;
    if (e == 3)
        summ2 = 31 + 28;
    if (e == 4)
        summ2 = 31 + 28 + 31;
    if (e == 5)
        summ2 = 31 + 28 + 31 + 30;
    if (e == 6)
        summ2 = 31 + 28 + 31 + 30 + 31;
    if (e == 7)
        summ2 = 31 + 28 + 31 + 30 + 31 + 30;
    if (e == 8)
        summ2 = 31 + 28 + 31 + 30 + 31 + 30 + 31;
    if (e == 9)
        summ2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    if (e == 10)
        summ2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    if (e == 11)
        summ2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    if (e == 12)
        summ2 = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    if (((d % 4 == 0 && d % 100 != 0) || (d % 400 == 0)) && (e >= 3))
        g = 1;
    else
        g = 0;
    summ2 = summ2 + g;
    h = sumy2 + summ2 + f - sumy1 - summ1 - c;
    printf ("%d", h);
    return 0;
}

