int main () {
    int time [1000] = {0}, x [1000], y [1000], people = 0, max = 0, i = 0, j = 0;
    char c;
    do {
        cin >> x[i];
        c = getchar ();
        i++;
    }
    while (c == ',');
    do {
        cin >> y[j];
        c = getchar ();
        j++;
    }
    while (c == ',');
    for (int m = 0;
    m < i; m++)
        for (int k = x[m];
        k < y[m]; k++)
            time[k] = time[k] + 1;
    for (int l = 0;
    l < 1000; l++) {
        if (max < time[l])
            max = time[l];
    }
    cout << i << " " << max << endl;
    return 0;
}

