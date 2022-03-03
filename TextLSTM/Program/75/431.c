int main () {
    int x [1000], y [1000], cnt [1001], num = 0, max, i;
    char ch;
    for (i = 0;; i++) {
        cin >> x[i];
        num++;
        ch = cin.get ();
        if (ch != ',')
            break;
    }
    for (i = 0;; i++) {
        cin >> y[i];
        ch = cin.get ();
        if (ch != ',')
            break;
    }
    for (i = 1; i <= 1000; i++) {
        cnt[i] = 0;
        for (int j = 0;
        j <= num - 1; j++) {
            if (i >= x[j] && i < y[j])
                cnt[i]++;
        }
    }
    max = cnt[1];
    for (i = 1; i <= 1000; i++) {
        if (max < cnt[i])
            max = cnt[i];
    }
    cout << num << ' ' << max << endl;
    return 0;
}

