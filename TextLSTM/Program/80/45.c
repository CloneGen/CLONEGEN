void main () {
    int a [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int q, w, e, r, t, y, i, j, z, x = 0, c = 0, v = 0, n = 0, m = 0;
    scanf ("%d%d%d%d%d%d", &q, &w, &e, &r, &t, &y);
    z = r - q;
    for (i = 1; i < z; i++) {
        if (((q + i) % 4 == 0 && (q + i) % 100 != 0) || ((q + i) % 400 == 0))
            x = x + 366;
        else
            x = x + 365;
    }
    if ((q % 4 == 0 && q % 100 != 0) || (q % 400 == 0)) {
        for (i = w; i < 12; i++)
            c = c + a[i];
        if (w == 2)
            c = c + 29 - e;
        else if (w == 4 || w == 6 || w == 9 || w == 11)
            c = c + 30 - e;
        else
            c = c + 31 - e;
    }
    else {
        for (i = w; i < 12; i++)
            c = c + b[i];
        if (w == 2)
            c = c + 28 - e;
        else if (w == 4 || w == 6 || w == 9 || w == 11)
            c = c + 30 - e;
        else
            c = c + 31 - e;
    }
    if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0)) {
        for (i = 0; i < t - 1; i++)
            v = v + a[i];
        v = v + y;
    }
    else {
        for (i = 0; i < t - 1; i++)
            v = v + b[i];
        v = v + y;
    }
    if (z == 0) {
        if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0))
            printf ("%d", c + v - 366);
        else
            printf ("%d", c + v - 365);
    }
    else
        printf ("%d", x + c + v);
}

