int main () {
    int x [5000], y [5000], total, count = 0, max = 0;
    int i, j;
    cin >> x[0];
    total = 1;
    while (cin.get () != '\n') {
        cin >> x[total];
        total++;
    }
    cin >> y[0];
    total = 1;
    while (cin.get () != '\n') {
        cin >> y[total];
        total++;
    }
    for (j = 0; j < total; j++) {
        count = 0;
        for (i = 0; i < total; i++) {
            if (x[j] >= x[i] && x[j] < y[i])
                count++;
        }
        if (count > max)
            max = count;
    }
    cout << total << " " << max << endl;
    return 0;
}

