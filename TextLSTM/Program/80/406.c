int main () {
    int n1, y1, r1, n2, y2, r2, i, d0, d1, d2, d3, d;
    scanf ("%d %d %d %d %d %d", &n1, &y1, &r1, &n2, &y2, &r2);
    for (i = n1, d0 = 0; i < n2; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            d0 = d0 + 366;
        else
            d0 = d0 + 365;
    }
    d1 = (y1 - 1) * 30;
    {
        if (y1 == 1 || y1 == 3)
            d1 = d1;
        else if (y1 == 2 || y1 == 4 || y1 == 5)
            d1 = d1 + 1;
        else if (y1 == 6 || y1 == 7)
            d1 = d1 + 2;
        else if (y1 == 8)
            d1 = d1 + 3;
        else if (y1 == 9 || y1 == 10)
            d1 = d1 + 4;
        else
            d1 = d1 + 5;
    }
    {
        if ((n1 % 4 == 0 && n1 % 100 != 0) || n1 % 400 == 0)
            d1 = d1;
        else if (y1 > 2)
            d1 = d1 - 1;
    }
    d2 = (y2 - 1) * 30;
    {
        if (y2 == 1 || y2 == 3)
            d2 = d2;
        else if (y2 == 2 || y2 == 4 || y2 == 5)
            d2 = d2 + 1;
        else if (y2 == 6 || y2 == 7)
            d2 = d2 + 2;
        else if (y2 == 8)
            d2 = d2 + 3;
        else if (y2 == 9 || y2 == 10)
            d2 = d2 + 4;
        else
            d2 = d2 + 5;
    }
    {
        if ((n2 % 4 == 0 && n2 % 100 != 0) || n2 % 400 == 0)
            d2 = d2;
        else if (y2 > 2)
            d2 = d2 - 1;
    }
    d3 = r2 - r1;
    d = d0 - d1 + d2 + d3;
    printf ("%d\n", d);
    return 0;
}

