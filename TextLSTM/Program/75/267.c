int main () {
    int i, j, k, x [1001], y [1001], m [1001] = {0}, n;
    char s;
    i = 1;
    cin >> x[1];
    s = cin.get ();
    while (s == ',') {
        i++;
        cin >> x[i];
        s = cin.get ();
    }
    i = 1;
    cin >> y[1];
    s = cin.get ();
    while (s == ',') {
        i++;
        cin >> y[i];
        s = cin.get ();
    }
    for (j = 1; j <= 1000; j++) {
        for (k = 1; k <= i; k++) {
            if (j >= x[k] && j < y[k]) {
                m[j]++;
            }
        }
    }
    n = 0;
    for (j = 1; j <= 1000; j++) {
        if (n < m[j]) {
            n = m[j];
        }
    }
    cout << i << " " << n;
    return 0;
}

