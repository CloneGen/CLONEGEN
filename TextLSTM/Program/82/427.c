int main () {
    int n, sp, dp;
    int i, time, max;
    time = 0;
    max = 0;
    i = 1;
    cin >> n;
    while (i <= n) {
        cin >> sp >> dp;
        if (sp >= 90 && sp <= 140 && dp >= 60 && dp <= 90) {
            time = time + 1;
        }
        else {
            if (max < time)
                max = time;
            time = 0;
        }
        if (time > max)
            max = time;
        i = i + 1;
    }
    cout << max;
    return 0;
}

