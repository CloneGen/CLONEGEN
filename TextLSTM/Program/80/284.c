int main () {
    int sy, sm, sd, ey, em, ed, l1 = 0, l2 = 0, l;
    int a [] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b [] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    cin >> sy >> sm >> sd >> ey >> em >> ed;
    for (i = 1; i < sy; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            l1 += 366;
        else
            l1 += 365;
    }
    for (i = 1; i < sm; i++) {
        if ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0))
            l1 += b[i];
        else
            l1 += a[i];
    }
    l1 += sd;
    for (i = 1; i < ey; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            l2 += 366;
        else
            l2 += 365;
    }
    for (i = 1; i < em; i++) {
        if ((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
            l2 += b[i];
        else
            l2 += a[i];
    }
    l2 += ed;
    l = l2 - l1;
    cout << l;
    return 0;
}

