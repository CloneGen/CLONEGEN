int main () {
    int x [2000], y [2000], t [2000] = {0}, i = 1, max, j, k;
    cin >> x[1];
    while (cin.get () != '\n') {
        i++;
        cin >> x[i];
    }
    cin >> y[1];
    i = 1;
    while (cin.get () != '\n') {
        i++;
        cin >> y[i];
    }
    for (j = 1; j <= i; j++) {
        for (k = x[j]; k < y[j]; k++) {
            t[k]++;
        }
    }
    max = t[0];
    for (int q = 1;
    q < 1000; q++) {
        if (t[q] > max)
            max = t[q];
    }
    cout << i << ' ' << max << endl;
    return 0;
}

