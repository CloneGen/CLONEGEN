int g_num, g_minn = 5000, g_maxx = 0;

void trans (int num1 [], char str [5000]) {
    int len, i, ii, jj, kk, s;
    int q [5000];
    len = strlen (str);
    i = 0;
    g_num = 0;
    while (i < len) {
        s = 1;
        g_num++;
        ii = i;
        jj = 1;
        while ((str[ii] != ',') && (ii < len)) {
            q[jj] = str[ii] - '0';
            jj++;
            ii++;
        }
        for (kk = jj - 1; kk >= 1; kk--) {
            num1[g_num] += s * q[kk];
            s *= 10;
        }
        if (num1[g_num] < g_minn)
            g_minn = num1[g_num];
        if (num1[g_num] > g_maxx)
            g_maxx = num1[g_num];
        i = ii + 1;
    }
}

int main () {
    char x [5000], y [5000];
    int xx [5000] = {0}, yy [5000] = {0}, t [5000] = {0};
    int j, k, most = 0;
    cin >> x;
    cin >> y;
    trans (xx, x);
    trans (yy, y);
    for (j = 1; j <= g_num; j++) {
        for (k = xx[j]; k < yy[j]; k++)
            t[k]++;
    }
    for (k = g_minn; k <= g_maxx; k++) {
        if (t[k] > most)
            most = t[k];
    }
    cout << g_num << " " << most << endl;
    return 0;
}

