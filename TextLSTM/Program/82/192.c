int main () {
    int n, high [100], low [100], count = 0, time_max = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> high[i] >> low[i];
    for (int i = 0;
    i < n; i++) {
        if (high[i] >= 90 && high[i] <= 140 && low[i] >= 60 && low[i] <= 90) {
            count += 1;
            if (i == n - 1)
                time_max = (count > time_max) ? count : time_max;
        }
        else {
            time_max = (count > time_max) ? count : time_max;
            count = 0;
        }
    }
    cout << time_max << endl;
    return 0;
}

