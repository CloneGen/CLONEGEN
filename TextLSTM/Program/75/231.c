int main () {
    int x [1002], y [1002], z [1002] = {0}, i, j, count, t;
    char c;
    count = 1;
    i = 1;
    cin >> x[0];
    c = cin.get ();
    while (c == ',') {
        count++;
        cin >> x[i];
        c = cin.get ();
        i++;
    }
    i = 1;
    cin >> y[0];
    c = cin.get ();
    while (c == ',') {
        cin >> y[i];
        c = cin.get ();
        i++;
    }
    i--;
    for (; i >= 0; i--) {
        for (j = x[i]; j < y[i]; j++)
            z[j]++;
    }
    for (j = 1; j <= 1000; j++) {
        if (z[j] < z[j - 1])
            z[j] = z[j - 1];
        t = z[j];
    }
    cout << count << " " << t << endl;
    return 0;
}

