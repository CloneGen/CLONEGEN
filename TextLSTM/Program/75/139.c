int main () {
    int i, j, n, time [1000] = {0}, max, in [1000], out [1000];
    char c [1000];
    for (i = 0; c[i - 1] != '\n'; i++) {
        cin >> in[i];
        c[i] = cin.get ();
    }
    n = i;
    for (i = 0; c[i - 1] != '\n'; i++) {
        cin >> out[i];
        c[i] = cin.get ();
    }
    for (i = 0; i < n; i++)
        for (j = in[i]; j < out[i]; j++)
            time[j]++;
    max = 0;
    for (i = 1; i < 1000; i++)
        if (time[max] < time[i])
            max = i;
    cout << n << ' ' << time[max] << endl;
    return 0;
}

