int main () {
    char x [5000], y [5000];
    int xx [5000] = {0}, yy [5000] = {0}, t [5000] = {0}, q [5000] = {0};
    int i, j, ii, num, s, k, max = 0, min = 1200, most = 0, least = 1200, n1, kk, jj, n2;
    cin >> x;
    cin >> y;
    i = 0;
    num = 0;
    n1 = strlen (x);
    n2 = strlen (y);
    while (i < n1) {
        s = 1;
        num++;
        ii = i;
        jj = 1;
        while ((x[ii] != ',') && (ii < n1)) {
            q[jj] = x[ii] - '0';
            jj++;
            ii++;
        }
        for (kk = jj - 1; kk >= 1; kk--) {
            xx[num] += s * q[kk];
            s *= 10;
        }
        if (xx[num] < min)
            min = xx[num];
        i = ii + 1;
    }
    i = 0;
    num = 0;
    while (i < n2) {
        s = 1;
        ii = i;
        num++;
        jj = 1;
        while ((y[ii] != ',') && (ii < n2)) {
            q[jj] = y[ii] - '0';
            jj++;
            ii++;
        }
        for (kk = jj - 1; kk >= 1; kk--) {
            yy[num] += s * q[kk];
            s *= 10;
        }
        if (yy[num] > max)
            max = yy[num];
        i = ii + 1;
    }
    for (j = 1; j <= num; j++) {
        for (k = xx[j]; k < yy[j]; k++) {
            t[k]++;
        }
    }
    for (k = min; k <= max; k++) {
        if (t[k] > most)
            most = t[k];
        if (t[k] < least)
            least = t[k];
    }
    cout << num << " " << most << endl;
    return 0;
}

