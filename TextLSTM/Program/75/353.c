int main () {
    int x [1001] = {0}, y [1001] = {0};
    int total = 0, n = 0;
    char ch = 0;
    int time [1001] = {0};
    int i, j;
    do {
        cin >> n;
        cin.get (ch);
        x[total] = n;
        total++;
    }
    while (ch == ',');
    total = 0;
    do {
        cin >> n;
        cin.get (ch);
        y[total] = n;
        total++;
    }
    while (ch == ',');
    cout << total << " ";
    for (i = 0; i < total; i++)
        for (j = x[i]; j < y[i]; j++)
            time[j]++;
    int t = 0;
    for (i = 0; i < 1001; i++)
        if (time[i] > t)
            t = time[i];
    cout << t;
    return 0;
}

