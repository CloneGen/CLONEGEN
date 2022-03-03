int main () {
    int sy, sm, sd, ey, em, ed;
    int sum = 0;
    int k, f;
    int m, d, a = 0, b = 0;
    int mon [2] [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,};
    int year [2] = {365, 366};
    cin >> sy >> sm >> sd >> ey >> em >> ed;
    for (; sy < ey - 1; sy++) {
        if (sm > 2)
            k = (((sy + 1) % 4 == 0 && (sy + 1) % 100 != 0) || ((sy + 1) % 400 == 0));
        else
            k = ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0));
        sum = sum + year[k];
    }
    k = ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0));
    if (sy < ey && (em > sm || (em == sm && ed >= sd))) {
        sum = sum + year[k];
        sy++;
    }
    k = ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0));
    f = ((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0));
    d = sd;
    for (m = sm; m > 0; m--) {
        for (; d > 0; d--)
            a++;
        d = mon[k][m - 2];
    }
    d = ed;
    for (m = em; m > 0; m--) {
        for (; d > 0; d--)
            b++;
        d = mon[f][m - 2];
    }
    if (sy == ey)
        sum = sum + b - a;
    else
        sum = sum - a + year[k] + b;
    cout << sum;
    return 0;
}

