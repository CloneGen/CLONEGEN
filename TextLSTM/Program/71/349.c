int run (int x) {
    int z;
    if (x % 100 == 0) {
        if (x % 400 == 0)
            z = 29;
        else
            z = 28;
    }
    else if (x % 4 == 0)
        z = 29;
    else
        z = 28;
    return (z);
}

int main () {
    int n, a [200] [3], b [12], i, j, num, p, q, aa, bb, cc;
    b[0] = 31;
    b[2] = 31;
    b[3] = 30;
    b[4] = 31;
    b[5] = 30;
    b[6] = 31;
    b[7] = 31;
    b[8] = 30;
    b[9] = 31;
    b[10] = 30;
    b[11] = 31;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> aa >> bb >> cc;
        a[i][0] = aa;
        a[i][1] = bb;
        a[i][2] = cc;
    }
    for (j = 0; j < n; j++) {
        b[1] = run (a[j][0]);
        num = 0;
        if (a[j][1] < a[j][2]) {
            p = a[j][1];
            q = a[j][2];
        }
        else {
            p = a[j][2];
            q = a[j][1];
        }
        for (; p < q; p++)
            num = num + b[p - 1];
        if (num % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

