int main () {
    char ch, dh;
    int i, j, l, k, m, t = 0, x [1002], y [1002], z [1002];
    for (k = 0; k <= 1001; k++)
        z[k] = 0;
    for (i = 0; i < 1001; i++) {
        cin >> x[i];
        ch = cin.get ();
        if (ch != ',')
            break;
    }
    for (j = 0; j <= 1001; j++) {
        cin >> y[j];
        dh = cin.get ();
        if (dh != ',')
            break;
    }
    for (l = 0; l <= i; l++)
        for (k = x[l]; k < y[l]; k++)
            z[k] = z[k] + 1;
    for (m = 0; m <= 1001; m++) {
        if (t <= z[m])
            t = z[m];
    }
    cout << i + 1 << " " << t << endl;
    return 0;
}

