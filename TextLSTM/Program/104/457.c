void main () {
    int x, y, i, countx, county, c, p, q;
    int a [11] = {0}, b [11] = {0};
    scanf ("%d %d", &x, &y);
    countx = 1;
    county = 1;
    c = 0;
    p = x;
    q = y;
    while (p != 1) {
        countx++;
        p = p / 2;
    }
    while (q != 1) {
        county++;
        q = q / 2;
    }
    for (i = countx; i >= 1; i--) {
        a[i] = x;
        x = x / 2;
    }
    for (i = county; i >= 1; i--) {
        b[i] = y;
        y = y / 2;
    }
    for (i = 1; i <= 10; i++) {
        if (a[i] == b[i] && a[i] != 0 && b[i] != 0)
            c = a[i];
        else
            break;
    }
    printf ("%d", c);
}

