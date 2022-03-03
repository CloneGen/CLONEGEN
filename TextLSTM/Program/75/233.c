int main () {
    int tin [1000], tout [1000], time [1000] = {0};
    int n = 0, max = 0, i, j;
    while (cin >> tin[n++]) {
        if (cin.get () == '\n')
            break;
    }
    for (i = 0; i < n; i++) {
        cin >> tout[i];
        cin.get ();
    }
    for (i = 0; i < n; i++)
        for (j = tin[i]; j < tout[i]; j++)
            time[j]++;
    for (i = 0; i < 1000; i++)
        if (time[i] > max)
            max = time[i];
    cout << n << " " << max << endl;
    return 0;
}

