int main () {
    int time, cnt, i, j, useless, n, icnt, pausecnt, trial;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> icnt;
        if (icnt == 0) {
            cout << 60 << endl;
            continue;
        }
        pausecnt = 0;
        time = 0;
        cnt = 0;
        cin >> trial;
        do {
            if (trial == cnt) {
                pausecnt++;
                time += 3;
                if (time >= 60)
                    break;
                if (pausecnt != icnt)
                    cin >> trial;
            }
            time++;
            cnt++;
        }
        while (time < 60);
        cout << cnt << endl;
        for (j = pausecnt; j < icnt - 1; j++)
            cin >> useless;
    }
    return 0;
}

