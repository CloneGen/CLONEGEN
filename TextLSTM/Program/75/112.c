int main () {
    int x [1000], y [1000], t [1000] = {0};
    int num = 0, max, i = 0, j;
    char temp = ',';
    char c;
    do {
        cin >> x[i];
        i++;
        num++;
        c = cin.get ();
    }
    while (c != '\n');
    i = 0;
    do {
        cin >> y[i];
        i++;
        c = cin.get ();
    }
    while (c != '\n');
    for (i = 0; i < 1000; i++) {
        for (j = 0; j < num; j++) {
            if (x[j] <= i && y[j] > i)
                t[i]++;
        }
    }
    max = t[0];
    for (i = 0; i < 1000; i++) {
        if (t[i] > max)
            max = t[i];
    }
    cout << num << " " << max << endl;
    return 0;
}

