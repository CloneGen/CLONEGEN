int main () {
    int time [1001] [3], tofbegin, tofend, num, noft [1001], max, t, i, j;
    char ignore;
    tofbegin = 1001;
    tofend = 0;
    for (j = 1; j <= 2; j++) {
        ignore = '0';
        for (i = 1; ignore != '\n'; i++) {
            cin >> time[i][j];
            cin.get (ignore);
            if (tofbegin > time[i][j])
                tofbegin = time[i][j];
            if (tofend < time[i][j])
                tofend = time[i][j];
        }
    }
    num = i - 1;
    max = 0;
    for (t = tofbegin; t < tofend; t++) {
        noft[t] = 0;
        for (i = 1; i <= num; i++)
            if (t < time[i][2] && t >= time[i][1])
                noft[t] += 1;
        if (max < noft[t])
            max = noft[t];
    }
    cout << num << ' ' << max << endl;
    return 0;
}

